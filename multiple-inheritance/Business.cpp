#include "Business.h"

Business::Business()
{
	this->phone = new char[30];
}

Business::~Business()
{
	delete[] phone;
}

char* Business::getPhone()
{
	return this->phone;
}

void Business::setPhone(char* phone)
{
	strcpy(this->phone, phone);
}
