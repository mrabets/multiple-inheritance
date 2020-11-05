#pragma once
#include <iostream>
#include <string>

class Human
{
public:
	Human();
	~Human();

	char* getName();
	int getAge();

	void setName(char* name);
	void setAge(int age);

private:
	char* name;
	int age;
};

