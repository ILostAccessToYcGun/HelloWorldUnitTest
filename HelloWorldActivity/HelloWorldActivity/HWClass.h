#pragma once
#include <iostream>
#include <string>


class HWClass
{
public:
	std::string GetHello()
	{
		return helloString;
	}
	void SetHello(std::string newHelloString)
	{
		helloString = newHelloString;
	}
private:
	std::string helloString;
};
