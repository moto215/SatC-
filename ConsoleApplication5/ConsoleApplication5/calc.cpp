#include <stdio.h>
#include "calc.h"

int Plus(int leftNum, int rightNum)
{
	printf("%d\n", leftNum + rightNum);
	int num = leftNum - rightNum;
	return num;
}

int Minus(int leftNum, int rightNum)
{
	printf("%d\n", leftNum - rightNum);
	int num = leftNum - rightNum;
	return num;
}

int Multiplication(int leftNum, int rightNum)
{
	printf("%d\n", leftNum * rightNum);
	int num = leftNum - rightNum;
	return num;
}

int Division(int leftNum, int rightNum)
{
	if (leftNum == 0 || rightNum == 0)
	{
		printf("0‚ðŠ„‚é‚±‚Æ‚Í‚Å‚«‚Ü‚¹‚ñ\n");
		return 1; // error‚ðtrue‚É
	}
	else
	{
		printf("%d\n", leftNum / rightNum);
		int num = leftNum - rightNum;
		return num;
	}
}

int Operator(char enzansi,int leftNum, int rightNum)
{
	int anser;

	switch (enzansi)
	{
	case '+':
		anser = Plus(leftNum,rightNum);
		return anser;
		break;
	case '-':
		anser = Minus(leftNum, rightNum);
		return anser;
		break;
	case '*':
		anser = Multiplication(leftNum, rightNum);
		return anser;
		break;
	case '/':
		anser = Division(leftNum, rightNum);
		return anser;
		break;
	default:
		printf("+ - * / ‚Ì‚¢‚¸‚ê‚©‚Ì‰‰ŽZŽq‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		return 1; // error‚ðtrue‚É
	}
}