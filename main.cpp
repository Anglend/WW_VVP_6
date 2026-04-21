#include <iostream>
#include <string>
#include <windows.h>
#include "Service.h"
#include "json.hpp"
#include "Weather.h"

int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	JsonService js;
	Weather w = js.getWeather("weather.json");
	w.printInfo();


	return 0;
}