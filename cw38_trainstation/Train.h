#pragma once
#include <iostream>
#include <string>
#include "Time_.h"
using namespace std;

class Train {
	string number;
	Time_ depature;
	string direction;

public:
	Train();
	Train(string number, Time_ depature, string direction);

	void setNumber(string number);
	void setDepature(Time_ depature);
	void setDirection(string direction);

	string getNumber()const;
	Time_ getDepature()const;
	string getDirection()const;

	void showInfo()const;

	bool operator< (const Train& obj)const&;

};

