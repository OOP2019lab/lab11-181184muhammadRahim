#pragma once
#include<iostream>
using namespace std;
#include<string>
class Person
{
public:
	Person(string fname, string lname, int age);
	~Person();
	void set_first_name();
	void get_first_name();
	void set_last_name();
	void get_last_name();
	void setage();
	int getage();
private:
	string first_name;
	string last_name;
protected:
	int age;
};

