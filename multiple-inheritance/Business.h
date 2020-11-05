#pragma once
#include "Citizen.h"
#include "Tourist.h"

class Business : public Citizen, public Tourist
{
public:
	Business();
	~Business();

	char* getPhone();
	void setPhone(char* phone);

private:
	char* phone;
};

