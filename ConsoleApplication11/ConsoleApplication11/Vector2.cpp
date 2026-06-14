#include "Vector2.h"
#include <iostream>

float Vector2::operator +(float target)
{
	float num = 0;
	num += target;
	return num;
}
void Vector2::operator -(float target)
{

}
void Vector2::operator ==(float target)
{
	
}

void Vector2::operator <<(float text) 
{
	std::cout << text << std::endl;
}