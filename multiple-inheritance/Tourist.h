#pragma once
#include "Human.h"
class Tourist : public virtual Human
{
public:
	Tourist();
	~Tourist();

	char* getVisa();
	void setVisa(char* visa);

private:
	char* visa;
};

