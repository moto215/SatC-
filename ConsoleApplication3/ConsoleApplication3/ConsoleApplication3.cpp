#include <stdio.h>
#include <iostream>
#include "MyClass.h"

int main()
{
	MyClass* myClass = instantiateMyClass();
	myClass->setValue(1);

	destroyMyClass(myClass);
	return 0;
}