//Student_List.cpp
#include <iostream>
#include <cstdlib>
#include <string>
#include "Student_List.h"
#include "Student.h"

using namespace std;

Student_List::Student_List()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void Student_List::AddStudent(Student AddData)
{
	nodePTR s = new node;
	s->next = NULL;
	s->stu = AddData;
	
	if(head != NULL)
	{
		curr = head;
		while(curr->next != NULL)
		{
			curr = curr->next;
		}
	}
	else
	{
		head = s;
	}
}
		
void Student_List::AddStudent(string, string, int, int)
{
	
}

void Student_List::RemoveStudent(Student delid)
{

}

void Student_List::print()
{
	curr = head;
	while(curr != NULL)
	{
		curr->stu.print();
		curr = curr->next;
	}
}
