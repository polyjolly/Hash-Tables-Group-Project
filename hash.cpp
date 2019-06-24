#include <iostream>
#include <cstdlib>
#include <string>
#include "hash.h"



hash::hash()
{
	tableSize = 100;
}

int hash::Hash(string key)
{
	int hash = 0;
	int index;
	
	
	
	for(int i = 0; i < key.length(); i++)
	{
		hash = hash + (int)key[i];
		cout<< "Hash = " <<hash<<endl;
	}
	
	index = hash % tableSize;
	
	return index;
}
