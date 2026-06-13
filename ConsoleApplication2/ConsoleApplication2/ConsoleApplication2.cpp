// ConsoleApplication11.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "Vecter2.h"

int main()
{
	Vector2 vec1(1, 2);
	Vector2 vec2(3, 4);

	Vector2 sum = vec1 + vec2;
	std::cout << sum.x_ << sum.y_ << std::endl;
	Vector2 diff = vec1 - vec2;
	std::cout << diff.x_ << diff.y_ << std::endl;

	if (vec1 == vec2) 
	{
		std::cout << "vec1とvec2は同じ位置" << std::endl;
	}
	else
	{
		std::cout << "vec1とvec2は違う位置" << std::endl;
	}

	return 0;
}