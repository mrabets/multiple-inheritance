#include "Citizen.h"

Citizen::Citizen()
{
	this->passport = new char[30];
}

Citizen::~Citizen()
{
	delete[] passport;
}

char* Citizen::getPassport()
{
	return this->passport;
}

void Citizen::setPassport(char* passport)
{
	strcpy(this->passport, passport);
}
