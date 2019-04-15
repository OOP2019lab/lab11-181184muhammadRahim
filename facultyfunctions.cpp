#include"faculty.h"
Faculty::Faculty(string fname, string lname, int age, int count, int tel) : Person(fname, lname, age)
{
	cout << "Constructor for faculty member invoked" << endl;
	this->coursecount = count;
	this->telno = tel;
}
int Faculty::getcoursecount()
{
	return this->coursecount;
}
int Faculty::gettelno()
{
	return this->telno;
}
void Faculty::setcoursecount()
{
	cout << "please enter course count?" << endl;
	cin >> coursecount;

}
void Faculty::settelno()
{
	cout << "please enter telephone extention number?" << endl;
	bool flag = false;
	for (int i = 0; flag == false; i++)
	{
		cin >> this->telno;
		if (this->telno >= 100 && this->telno<1000)
		{
			flag = true;
		}
		else
		{
			cout << "wrong telephone extention entered please re-enter?" << endl;
			cin >> this->telno;
		}
	}
}
void Faculty::printFaculty()
{
	cout << "faculty member name:";
	this->get_first_name();
	cout << " ";
	this->get_last_name();
	cout << " ";
	cout << "Age:";
	cout << this->getage()<<" ";
	cout << "no of courses:";
	cout << this->coursecount << " ";
	cout << "Ext.";
	cout << this->telno << " "<<endl;
}