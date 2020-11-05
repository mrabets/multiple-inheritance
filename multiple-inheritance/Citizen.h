#pragma once
#include "Human.h"
class Citizen : public virtual Human
{
public:
	Citizen();
	~Citizen();

	char* getPassport();
	void setPassport(char* passport);

private:
	char* passport;
};

