#include <iostream>
#include<cmath>
#include<string>
#include "Student.h"
using namespace std;

Student::Student()
{
	first = "";
	last = "";
	id = "0";
	credits = "0";
}

Student::Student(int idnum, string fname, string lname, int cred)
{
	first = fname;
	last = lname;
	id = idnum;
	credits = cred;
}
		
void Student::SetName(string fname, string lname)
{
	first = fname;
	last = lname;
}
		
void Student::SetID(int idnum)
{
	if (idnum < 0)
	{
		id = abs(idnum);	
	}
	else
	{
		id = idnum;
	}
}
		
void Student::SetCredits(int cred)
{
	if (cred < 0)
	{
		credits = abs(cred);
	}
	else
	{
		credits = cred;
	}
}
		
string Student::GetName()
{
	return first + " " + last;
}

string Student::GetID()
{
	return id;
}
		
string Student::GetCredits()
{
	return credits;
}
		
void Student::print()
{
	 cout<<"Name: "<<GetName()<<endl;
	 cout<<"ID: "<<GetID()<<endl;
	 cout<<"Credits: "<<GetCredits()<<endl;
}
