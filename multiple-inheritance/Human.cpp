#include "Human.h"

Human::Human()
{
    this->name = new char[30];
    this->age = 0;
}

Human::~Human()
{
    delete[] name;
}

char* Human::getName()
{
    return this->name;
}

int Human::getAge()
{
    return this->age;
}

void Human::setName(char* name)
{
    strcpy(this->name, name);
}

void Human::setAge(int age)
{
    this->age = age;
}