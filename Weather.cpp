#include "Weather.h"
#include <iostream>

Weather::Weather(std::string city1, double lon1, double lat1, double temperature1, std::string weather1, double windSpeed1, int clouds1) : city(city1), lon(lon1), lat(lat1), temperature(temperature1), weather(weather1), windSpeed(windSpeed1), clouds(clouds1)	{ }

void Weather::printInfo() const	{
	
	std::cout << "Город: " << city<<"\n";
	std::cout << "Долгота: " << lon << "\n";
	std::cout << "Широта: " << lat << "\n";
	std::cout << "Температура: " << temperature << "\n"; 
	std::cout << "Погода: " << weather << "\n";
	std::cout << "Скорость ветра: " << windSpeed << "\n";
	std::cout << "Облачность: " << clouds << "\n";

}
