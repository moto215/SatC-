#pragma once
class Vector2
{
public:
	float operator +(float target);
	void operator -(float target);
	void operator ==(float target);
	void operator <<(float num);
	Vector2() = default;
public:
	float x = 0;
	float y = 0;
};

