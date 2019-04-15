#include"Student.h"
#include<string>
Student::Student(string fname, string lname, int age, float cgpa) : Person(fname, lname, age)
{
	cout << "student constructor called" << endl;
	this->cgpa = cgpa;
}
Student::~Student()
{
	cout << "student destructor called" << endl;
}
float Student::getgpa()
{
	return this->cgpa;
}
void Student::setgpa()
{
	cout << "please enter cgpa?" << endl;
	bool flag = false;
	for (int i = 0; flag == false; i++)
	{
		cin >> this->cgpa;
		if (this->cgpa >= 0 && this->cgpa <= 4.0)
		{
			flag = true;
		}
		else
		{
			cout << "wrong cgpa entered please re-enter" << endl;
			cin >> this->cgpa;
		}
	}
}
void Student::getfyp_name()
{
	cout << this->fyp_name << endl;
}
void Student::setfyp_name()
{
	string name;
	cout << "please enter fyp_name" << endl;
	cin >> name;
	this->fyp_name = name;
}
void Student::printStudent()
{
	this->get_first_name();
	cout << " ";
	this->get_last_name();
	cout<< "is" << this->getage() << "years old, his cgpa is" << this->cgpa<<endl;

}