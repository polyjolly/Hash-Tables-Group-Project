//Student_List.h
#include <string>
#include "Student.h"
using namespace std;

#ifndef STUDENT_LIST_H
#define STUDENT_LIST_H

class Student_List
{
	private:
		typedef struct node
		{
			Student stu;
			node* next;	
		}* nodePTR;
		
		nodePTR head;
		nodePTR curr;
		nodePTR temp;
		
	public:
		Student_List();
		void AddStudent(Student AddData);
		void AddStudent(string, string, int, int);
		void RemoveStudent(Student delid);
		void print();
			
};



#endif //STUDENT_LIST_H
