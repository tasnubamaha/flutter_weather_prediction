import 'package:flutter/material.dart';
import 'package:lottie/lottie.dart';
import 'package:weather_prediction/models/weather_model.dart';
import 'package:weather_prediction/utils/weather_view_service.dart';

class WeatherView extends StatelessWidget {
  const WeatherView({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: Center(
      child: FutureBuilder(
          future: fetchWeather(),
          builder: (context, snapshot) {
            if (snapshot.connectionState == ConnectionState.waiting) {
              return Container();
            } else {
              return MainContent(weatherModel: snapshot.data);
            }
          }),
    ));
  }
}

class MainContent extends StatelessWidget {
  final WeatherModel? weatherModel;
  const MainContent({
    super.key,
    this.weatherModel,
  });

  @override
  Widget build(BuildContext context) {
    return SingleChildScrollView(
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          TodayWeatherContent(weatherModel: weatherModel),
          ListView.builder(
            shrinkWrap: true,
            itemCount: 5,
            padding: const EdgeInsets.all(8),
            itemBuilder: (context, index) => Container(
              color: const Color(0xFFE8EEF5),
              height: 80,
              margin: const EdgeInsets.all(2),
              child: Row(
                children: [
                  SizedBox(
                    width: 80,
                    height: 80,
                    child: Lottie.asset(
                        getWeatherAnimation(weatherModel?.weatherCondition)),
                  ),
                  Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text(
                          weatherModel!.temperature.round().toString(),
                          style: const TextStyle(
                            fontWeight: FontWeight.w700,
                          ),
                        ),
                        Text(weatherModel!.cityName),
                        Text(
                          weatherModel!.weatherCondition,
                          style: const TextStyle(
                            fontStyle: FontStyle.italic,
                          ),
                        ),
                      ],
                    ),
                  )
                ],
              ),
            ),
          )
        ],
      ),
    );
  }
}

class TodayWeatherContent extends StatelessWidget {
  const TodayWeatherContent({
    super.key,
    required this.weatherModel,
  });

  final WeatherModel? weatherModel;

  @override
  Widget build(BuildContext context) {
    return SizedBox(
      height: MediaQuery.of(context).size.height,
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          const SizedBox(
            height: 20,
          ),
          Lottie.asset(getWeatherAnimation(weatherModel?.weatherCondition)),
          Text(
            weatherModel?.weatherCondition ?? "Loading weather condition ...",
            style: const TextStyle(fontWeight: FontWeight.w100),
          ),
          const Spacer(),
          Text(
            "${weatherModel?.temperature.round() ?? "Loading Temparature ..."}°C",
            style: const TextStyle(fontSize: 80, fontWeight: FontWeight.w700),
          ),
          Text(
            weatherModel?.cityName ?? "Loading city ...",
            style: const TextStyle(fontSize: 40, fontWeight: FontWeight.w100),
          ),
          const Spacer(flex: 8),
        ],
      ),
    );
  }
}
