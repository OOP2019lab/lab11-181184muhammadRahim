#pragma once
#include"person.h"
class Student: private Person
{
public:
	Student(string fname, string lname, int age, float cgpa);
	~Student();
	float getgpa();
	void setgpa();
	void getfyp_name();
	void setfyp_name();
	void Student::printStudent();
private:
	float cgpa;
	string fyp_name;

};
