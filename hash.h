#include <iostream>
#include <cstdlib>
#include <string>
#include "Student.h"

using namespace std;

#ifndef HASH_H
#define HASH_H

class hash
{
	public:
		int Hash(string key);
		//Constructor
		hash();
		void AddStudent(string fname, string lname, string id, string cred);
		int NumberOfItemsInIndex(int index);
		void PrintTable();
	
	private:
		static const int tableSize = 10;
		
	/*	struct student
		{
			string first;
			string last;
			string id;
			string credits;
			student* next;
		};*/
		
	
		Student* HashTable[tableSize];	
};

#endif //HASH_H

