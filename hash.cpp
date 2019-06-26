#include <iostream>
#include <cstdlib>
#include <string>
#include "hash.h"

hash::hash()
{
	for(int i = 0; i < tableSize; i++)
	{
		HashTable[i] = new Student;
		HashTable[i]->first = "None";
		HashTable[i]->last = "None";
		HashTable[i]->id = "None";
		HashTable[i]->credits = "0";
		HashTable[i]->next = NULL;
	}
}

void hash::PrintTable()
{
	int number;
	for(int i = 0; i < tableSize; i++)
	{
		number = NumberOfItemsInIndex(i);
		cout<<"----------------";
		cout<<"index = "<< i << endl;
		cout<<"First: "<<HashTable[i]->first<< endl;
		cout<<"Last: "<<HashTable[i]->last<< endl;
		cout<<"ID: "<<HashTable[i]->id<< endl;
		cout<<"Credits: "<<HashTable[i]->credits<< endl;
		cout<<"# of items = "<< number << endl;
	}
}

int hash::NumberOfItemsInIndex(int index)
{
	int count = 0;
	
	if(HashTable[index]->last == "None")
	{
		return count;
	}
	else
	{
		count++;
		Student* Ptr = HashTable[index];
		while(Ptr->next != NULL)
		{
			count++;
			Ptr = Ptr->next;
		}
	}
	return count;
}


void hash::AddStudent(string fname, string lname, string idnum, string cred)
{
	int index = Hash(lname); //Stores student at hash location
	
	if(HashTable[index]->last == "None")
	{
		HashTable[index]->first = fname;
		HashTable[index]->last = lname;
		HashTable[index]->id = idnum;
		HashTable[index]->credits = cred;	
	}
	else
	{
		Student* Ptr = HashTable[index];
		Student* n = new Student;
		n->first = fname; 
		n->last = lname;
		n->id = idnum;
		n->credits = cred;
		n->next = NULL;
		while(Ptr->next != NULL)
		{
			Ptr = Ptr->next;
		}
		Ptr->next = n;
	}
	
}

void hash::FindLastName(string name)
{
	int index = Hash(name);
	bool foundname = false;
	string last;
	string first;
	string id;
	string credits;
 	
	Student* Ptr = HashTable[index];
	
	while(Ptr != NULL)
	{
	
		if(Ptr->last == name)
		{
			foundname = true;
			last = Ptr->last;
			first = Ptr->first;
			id = Ptr->id;
			credits = Ptr->credits;
		}	
		Ptr = Ptr->next;
		
	}
	if(foundname == true)
	{
		cout<<"Found Key = "<<last<<endl;
		cout<<"---------------"<<endl;
		cout<<"Attributes: "<<endl;
		cout<<"First: "<<first<<endl;
		cout<<"Last: "<<last<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Credits: "<<credits<<endl;
	}
	else if(foundname == false)
	{
		cout<<name<<" was not found!\n";
	}
	
}


int hash::Hash(string key)
{
	int hash = 0;
	int index;
	
	
	
	for(int i = 0; i < key.length(); i++)
	{
		hash = hash + (int)key[i];
		//cout<< "Hash = " <<hash<<endl;
	}
	
	index = hash % tableSize;
	
	return index;
}
