#include <stdio.h>
#include <iostream>
#include <memory>
#include "Test.h"

int main()
{
	std::shared_ptr<Test> testPrt1 = std::make_shared<Test>();
	std::shared_ptr<Test> testPrt2 = std::make_shared<Test>();

	testPrt1->ptr_ = testPrt2;
	testPrt2->ptr_ = testPrt1;

	return 0;
}