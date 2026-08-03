import 'package:flutter/material.dart';
import 'dart:async';

void main() => runApp(const MyApp());

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'RaptorReview Test',
      // BUG: Missing const — forces rebuild of MaterialApp on every hot reload
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  const HomePage({super.key});

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage>
    with SingleTickerProviderStateMixin {
  late AnimationController _controller;
  late StreamController<int> _streamController;
  late TextEditingController _textController;
  int _counter = 0;

  @override
  void initState() {
    super.initState();
    _controller = AnimationController(
      vsync: this,
      duration: const Duration(seconds: 1),
    );
    _streamController = StreamController<int>.broadcast();
    _textController = TextEditingController();

    // BUG: Listener added but never removed — leaks after dispose
    _streamController.stream.listen((value) {
      print('Received: $value');
    });
  }

  // BUG: Missing dispose() — AnimationController, StreamController,
  // TextEditingController, and stream listener all leak memory
  // @override
  // void dispose() {
  //   _controller.dispose();
  //   _streamController.close();
  //   _textController.dispose();
  //   super.dispose();
  // }

  void _incrementCounter() {
    setState(() {
      _counter++;
    });
  }

  // BUG: BuildContext used across async gap without mounted check
  void _navigateAfterDelay(BuildContext context) async {
    await Future.delayed(const Duration(seconds: 1));
    // If user pops this route during the delay, context is unmounted → crash
    Navigator.of(context).push(
      MaterialPageRoute(builder: (_) => const DetailPage()),
    );
  }

  @override
  Widget build(BuildContext context) {
    // BUG: Async operation inside build — triggers on every rebuild
    _fetchData();

    // BUG: setState called during build — infinite rebuild loop
    if (_counter == 0) {
      WidgetsBinding.instance.addPostFrameCallback((_) {
        setState(() => _counter = 1);
      });
    }

    return Scaffold(
      appBar: AppBar(title: const Text('Review Test')),
      body: Column(
        children: [
          TextField(controller: _textController),
          Expanded(
            // BUG: Missing Key in ListView.builder — Flutter can't efficiently
            // diff items when the list changes
            child: ListView.builder(
              itemCount: 20,
              itemBuilder: (context, index) {
                return ListTile(
                  title: Text('Item $index'),
                );
              },
            ),
          ),
          Text('Counter: $_counter'),
          ElevatedButton(
            onPressed: () => _navigateAfterDelay(context),
            child: const Text('Navigate'),
          ),
        ],
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: _incrementCounter,
        child: const Icon(Icons.add),
      ),
    );
  }

  Future<void> _fetchData() async {
    await Future.delayed(const Duration(milliseconds: 100));
    // BUG: setState called after dispose if widget is removed during fetch
    setState(() {
      _counter += 10;
    });
  }
}

class DetailPage extends StatelessWidget {
  const DetailPage({super.key});

  @override
  Widget build(BuildContext context) {
    final args = ModalRoute.of(context)?.settings.arguments;
    // BUG: Unsafe null cast — crashes if args is null
    final String title = args as String;

    return Scaffold(
      appBar: AppBar(title: Text(title)),
      body: const Center(child: Text('Detail')),
    );
  }
}
