//Student.h
#include <string>
#include<iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student
{
	
		
	public:	
		//construct
		Student();
		//overload
		Student(int, string, string, int);
		//mutator
		void SetName(string, string);
		void SetID(int);
		void SetCredits(int);
		//accessor
		string GetName();
		string GetID();
		string GetCredits();
		//vars
		string id;
		string first;
		string last;
		string credits;
		Student* next;
		//print
		void print();
		
};



#endif //STUDENT_H
