#include <stdio.h>
#include <iostream>
#include "MyClass.h"

int main()
{
	int size = 10;
	MyClass* myClass = instantiateMyClass(size);
	
	for (int i = 0; i < size; i++) 
	{
		myClass[i].setValue(i);
	}

	destroyMyClass(myClass);
	return 0;
}