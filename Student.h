//Student.h
#include <string>
#include<iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student
{
	private:
		string id;
		string first;
		string last;
		string credits;
	public:	
		Student();
		Student(int, string, string, int);
		
		void SetName(string, string);
		void SetID(int);
		void SetCredits(int);
		
		string GetName();
		string GetID();
		string GetCredits();
		
		void print();
		
};



#endif //STUDENT_H
