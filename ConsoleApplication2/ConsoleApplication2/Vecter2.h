#pragma once
class Vector2
{
public:
	Vector2() = default;
	Vector2(int x, int y)
	{
		x_ = x;
		y_ = y;
	}
public:
	Vector2 operator +(const Vector2& vec);
	Vector2 operator -(const Vector2& vec);
	bool operator ==(const Vector2& vec);
	void operator <<(float num);
public:
	float x_ = 0;
	float y_ = 0;
};