#include <stdio.h>
#include "template.h"

int main()
{
	int a = add(1, 5);
	float a1 = add(1.5f, 5.0f);

	int s = sub(1, 5);
	float s1 = sub(1.5f, 5.0f);

	int m = mul(3, 5);
	float m1 = mul(1.5f, 5.0f);

	int sp = spl(6, 2);
	float sp1 = spl(6.0f, 1.5f);

	return 0;
}