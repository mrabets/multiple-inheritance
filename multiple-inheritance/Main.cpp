#include <iostream>
#include "Human.h"
#include "Citizen.h"
#include "Tourist.h"
#include "Business.h"

using namespace std;

int main()
{
	char* string = new char[30];

	Business business;
	strcpy(string, "Windows");
	business.setName(string);
	business.setAge(18);
	strcpy(string, "MP373733");
	business.setPassport(string);
	strcpy(string, "EUROPEAN UNION");
	business.setVisa(string);
	strcpy(string, "+375257957811");
	business.setPhone(string);

	cout << business.getName() << endl;
	cout << business.getAge() << endl;
	cout << business.getPassport() << endl;
	cout << business.getVisa() << endl;
	cout << business.getPhone() << endl;

	delete[] string;
	return 0;
}