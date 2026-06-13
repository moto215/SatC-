#pragma once
class Test
{
public:
	Test();
	~Test();

	void setNum(int num)
	{
		num_ = num;
	}
private:
	int num_ = 0;
};