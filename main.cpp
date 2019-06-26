#include <iostream>
#include <cstdlib>
#include <string>
#include "hash.h"

using namespace std;

// Hash tables project CS230 John Greim & Matthew Petros

hash StudentDatabase;

int DisplayMenu()
{
	int choice = 0;
	system("CLS");
	cout<<"=======Student Database=======\n"
		<<"1. Insert a New Student (Assign Values to Attributes)\n"
		<<"2. Find a Student by Last Name\n"
		<<"3. Print Enter Table\n"
		<<"4. Exit\n\n"
		<<"Select an option: ";
	
	cin>>choice;
	return choice;
}

void addStudent()
{
	string firstname;
	string lastname; 
	string idnumber;
	string accumcreds;
	int option = 0;
	
	while(option != 2)
	{
	cout<<"Enter First Name of Student: ";
	cin>>firstname;
	cout<<"Enter Last Name of Student: ";
	cin>>lastname;
	cout<<"Enter ID Number for Student: ";
	cin>>idnumber;
	cout<<"Enter Credits of Student: ";
	cin>>accumcreds;
	
	StudentDatabase.AddStudent(firstname,lastname, idnumber,accumcreds);
	
	cout<<"Enter Another Student?"<<endl;
	cout<<"1.) Yes"<<endl;
	cout<<"2.) No"<<endl;
	cout<<"Input: ";
	cin>>option;
	}
}

void PrintStudent()
{
	string lastname;
	
	cout<<"Enter The Last Name of Student to Print (Last name = key)"<<endl;
	cin>>lastname;
	
	StudentDatabase.FindLastName(lastname);
	
}

int main(int argc, char *argv[])
{
	

	int choice = 0;
	
	//Performs the actions chosen by the user in the main menu
	while (choice != 4)
	{
		choice = DisplayMenu();
		
		switch (choice) 
		{
			case 1: addStudent(); break;
			case 2: PrintStudent(); break;
			case 3: StudentDatabase.PrintTable(); break;
			case 4: cout<<"EXITING\n"; break;
			default: cout<<"ERROR: Invalid Option.\n";
		}
		system("PAUSE"); 
	}
	
	return 0;
}
