#include <iostream>
#include <cstdlib>
#include <string>
#include "hash.h"

using namespace std;

// Hash tables project CS230 John Greim & Matthew Petros

int DisplayMenu()
{
	int choice = 0;
	system("CLS");
	cout<<"=======Student Database=======\n"
		<<"1. Insert a New Student (Assign Values to Attributes)\n"
		<<"2. Find a Student by Last Name\n"
		<<"3. Exit\n\n"
		<<"Select an option: ";
	
	cin>>choice;
	return choice;
}

void addStudent()//USE?
{
	
}

void PrintStudent() //USE?
{
	
}

int main(int argc, char *argv[])
{
	hash Hashy;
	Hashy.PrintTable();
	
	/*
	int choice = 0;
	
	//Performs the actions chosen by the user in the main menu
	while (choice != 3)
	{
		choice = DisplayMenu();
		
		switch (choice) 
		{
			case 1: addStudent(); break;
			case 2: PrintStudent(); break;
			case 3: cout<<"EXITING"; break;
			default: cout<<"ERROR: Invalid Option.\n";
		}
		//system("PAUSE"); 
	}
	*/
	return 0;
}
