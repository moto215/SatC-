#pragma once
#include <memory>

class Test
{
public:
	Test();
	~Test();
public:
	std::weak_ptr<Test> ptr_;
};