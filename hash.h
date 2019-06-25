#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <vector>
using namespace std;

#ifndef HASH_H
#define HASH_H

class hash
{
	public:
		int Hash(string key);
		//Constructor
		hash();
		
	private:
		int tableSize;
		
};

#endif //HASH_H

