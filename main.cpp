#include <iostream>
#include <cstdlib>
#include <string>
#include "hash.h"
using namespace std;

// Hash tables project CS230 John Greim & Matthew Petros

int main(int argc, char *argv[])
{
	int index;
	hash hashObj;
	
	index = hashObj.Hash("Paula");
	
	cout<<"Hash Table Index: "<<index;
	return 0;
}
