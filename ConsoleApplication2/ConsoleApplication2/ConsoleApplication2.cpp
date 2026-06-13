#include <stdio.h>
#include "Test.h"

int main()
{
	int lange = 5;
	Test* test = new Test[lange];

	for (int i = 0; i < lange; i++) 
	{
		test[i].setNum(i);

	}
	delete[] test;

	return 0;
}