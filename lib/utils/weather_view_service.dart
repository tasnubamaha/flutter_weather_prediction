import 'dart:math';

import 'package:weather_prediction/models/weather_model.dart';
import 'package:weather_prediction/services/weather_service.dart';

Future<WeatherModel?> fetchWeather() async {
  final weatherService = AppWeatherService();
  late WeatherModel weather;
  try {
    weather = await weatherService.getWeather();
  } catch (e) {
    log(e.toString() as num);
  }
  return weather;
}

String getWeatherAnimation(String? mainCondition) {
  if (mainCondition == null) return "assets/sunny_weather.json";
  final condition = mainCondition.toLowerCase();

  if (condition.contains("cloud")) {
    return "assets/cloudy_weather.json";
  } else if (condition.contains("rain")) {
    return "assets/rainy_weather.json";
  } else if (condition.contains("clear")) {
    return "assets/sunny_weather.json";
  } else if (condition.contains("thunderstorm")) {
    return 'assets/rainy_and_stormy_weather.json';
  } else {
    return "assets/sunny_weather.json";
  }
}
