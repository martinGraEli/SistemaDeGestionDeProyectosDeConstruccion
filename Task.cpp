

#include "Task.h"

Task::Task()
{
	name = " ";
	state = " ";
}

Task::Task(string name, string state)
{
	this->name = name;
	this->state = state;
}

string Task::getName()
{
	return name;
}

string Task::getState()
{
	return state;
}

Task::~Task()
{
}
