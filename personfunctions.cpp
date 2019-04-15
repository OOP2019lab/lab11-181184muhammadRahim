#include"person.h"
Person::Person(string fname, string lname, int age)
{
	cout << "person constructor called" << endl;
	this->first_name = fname;
	this->last_name = lname;
	this->age = age;
}
Person::~Person()
{
	cout << "person destructor called" << endl;
}
void Person::set_first_name()
{
	cout << "please enter first name" << endl;
	cin >> this->first_name;
}
void Person::get_first_name()
{
	cout << this->first_name;
}
void Person::set_last_name()
{
	cout << "please enter last name" << endl;
	cin >> this->last_name;
}
void Person::get_last_name()
{
	cout << this->last_name;
}
void Person::setage()
{
	cout << "please enter age?" << endl;
	bool flag = false;
	for (int i = 0; flag == false; i++)
	{
		cin >> this->age;
		if (this->age>0 && age<100)
		{
			flag = true;
		}
		else
		{
			cout << "wrong age entered please re-enter" << endl;
			cin >> this->age;
		}
	}
}
int Person::getage()
{
	return this->age;
}

