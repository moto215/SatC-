#include <stdio.h>
#include "template.h"

int main()
{
	int a = add(1, 5.0f);
	float a1 = add(1.5f, 5);

	int s = sub(1, 5.0f);
	float s1 = sub(1.5f, 5);

	int m = mul(3, 5.0f);
	float m1 = mul(1.5f, 5);

	int sp = spl(6, 2.0f);
	float sp1 = spl(6.0f, 1);

	return 0;
}