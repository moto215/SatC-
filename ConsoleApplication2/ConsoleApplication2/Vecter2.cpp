#include "Vecter2.h"
#include <iostream>

Vector2 Vector2::operator +(const Vector2& vec)
{
	int x = x_ + vec.x_;
	int y = y_ + vec.y_;

	return Vector2(x, y);
}
Vector2 Vector2::operator -(const Vector2& vec)
{
	int x = x_ - vec.x_;
	int y = y_ - vec.y_;

	return Vector2(x, y);
}
bool Vector2::operator ==(const Vector2& vec)
{
	return (x_ == vec.x_) && (y_ == vec.y_);
}

void Vector2::operator <<(float text)
{
	std::cout << text << std::endl;
}