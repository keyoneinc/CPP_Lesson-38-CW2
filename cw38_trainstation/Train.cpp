#include "Train.h"

Train::Train()
{
    number = "---";
    depature = Time_(0, 0, 0);
    direction = "---";
}

Train::Train(string number, Time_ depature, string direction)
{
    this->number = number;
    this->depature = depature;
    this->direction = direction;
}

void Train::setNumber(string number)
{
    this->number = number;
}

void Train::setDepature(Time_ depature)
{
    this->depature = depature;
}

void Train::setDirection(string direction)
{
    this->direction = direction;
}

string Train::getNumber() const
{
    return number;
}

Time_ Train::getDepature() const
{
    return depature;
}

string Train::getDirection() const
{
    return direction;
}

void Train::showInfo() const
{
    cout << number << " | " << depature << " | " << direction << endl;
}

bool Train::operator<(const Train& obj) const&
{
    return this->depature < obj.depature;
}
