import 'package:flutter/material.dart';
import 'package:flutter_app/screens/home.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Foss Club App',
      debugShowCheckedModeBanner: false,
      home: Home(),
    );
  }
}
