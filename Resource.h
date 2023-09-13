#pragma once
#include <iostream>

class Resource
{


protected:
	std::string material;
	int amount;
	float cost;

public:
	Resource();
	~Resource();

};

