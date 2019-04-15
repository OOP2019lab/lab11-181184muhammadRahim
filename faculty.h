#pragma once
#include"person.h"
class Faculty: private Person
{
public:
	Faculty(string fname, string lname, int age, int count, int tel);
	void setcoursecount();
	void settelno();
	int getcoursecount();
	int gettelno();
	void printFaculty();

private:
	int coursecount;
	int telno;
};

