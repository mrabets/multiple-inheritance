#include "Tourist.h"

Tourist::Tourist()
{
	this->visa = new char[30];
}

Tourist::~Tourist()
{
	delete[] visa;
}

char* Tourist::getVisa()
{
	return this->visa;
}

void Tourist::setVisa(char* visa)
{
	strcpy(this->visa, visa);
}
