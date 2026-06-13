#pragma once
#include <memory>

class Test
{
public:
	Test();
	~Test();
public:
	std::shared_ptr<Test> ptr_;
};