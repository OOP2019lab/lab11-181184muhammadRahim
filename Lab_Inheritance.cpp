#include<iostream>
using namespace std;
#include"faculty.h"
#include"person.h"
#include"Student.h"
int main()
{
	//Student s1("Ted", "Thompson", 22, 3.91);
	//Faculty A("Richard", "Kap", 45, 2, 420);
	/* output 1st main:
	person constructor called
		student constructor called
		student destructor called
		person destructor called
		person constructor called
		Constructor for faculty member invoked
		person destructor called*/
	//s1.printStudent();



	Student s("Ted", "Thompson", 22, 3.91);
	Faculty f("Richard", "Karp", 45, 2, 420);
	//here the number of courses is 2
	//and the extension number is 420

	s.printStudent();
	f.printFaculty();
    /* 2nd main output
	person constructor called
		student constructor called
		person constructor called
		Constructor for faculty member invoked
		Ted Thompsonis22years old, his cgpa is3.91
		faculty member name : Richard Karp Age : 45 no of courses : 2 Ext.420*/

	system("pause");
}