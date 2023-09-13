#pragma once
#include<iostream>

using namespace std;

class Task
{
private:
	string name;
	string state;
public:
	Task();
	Task(string name, string state);
	string getName();
	string getState();
	~Task();
};
