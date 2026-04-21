#include <stdexcept>
#include <fstream>
#include "Service.h"
#include "json.hpp"
#include "pugixml.hpp"

//using nlohmann::json;
//Weather JsonService::getWeather(std::string s)
//{
//    std::ifstream fin(s);
//    if (!fin)
//        throw std::exception("error");
//
//    json j;
//    j = json::parse(fin);
//    std::string city = j["name"]; //  Киров
//    double lon = j["coord"]["lon"]; // 49.6601
//    double lat = j["coord"]["lat"]; // 58.5966  
//    double temperature = j["main"]["temp"]; // 5.69
//    std::string weather = j["weather"]["description"]; // дождь
//    double windSpeed = j["wind"]["speed"]; // 4.27
//    int clouds = j["clouds"]["all"]; // 100
//    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds );
//}

using namespace pugi;
Weather XmlService::getWeather(std::string s)
{
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result)
        throw exception("error");
    xml_node node = doc.child("current");
    std::string city = node.child("city").
        attribute("name").
        as_string(); //  Киров
    double lon = node.child("city").child("coord").
        attribute("lon").
        as_int(); // 49.6601
    double lat = ...; // 58.5966
    double temperature = node.child("temperature").
        attribute("value").
        as_double(); // 5.69
    std::string weather = ...; // дождь
    double windSpeed = ...; // 4.27
    int clouds = ...; // 100
    return Weather(параметры);
}

