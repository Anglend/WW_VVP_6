#pragma once
#include "Weather.h"
class Service
{
	virtual Weather getWeather(std::string s) = 0;
	virtual ~Service();
};

class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};
