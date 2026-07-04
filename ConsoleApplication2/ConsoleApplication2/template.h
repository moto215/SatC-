#pragma once
#include <iostream>

template<class T, class T1>
T add(T l, T1 r)
{
	T value = l + r;

	std::cout << value << std::endl;
	return value;
}

template<class T, class T1>
T sub(T l, T1 r)
{
	T value = l - r;

	std::cout << value << std::endl;
	return value;
}

template<class T, class T1>
T mul(T l, T1 r)
{
	T value = l * r;

	std::cout << value << std::endl;
	return value;
}

template<class T, class T1>
T spl(T l, T1 r)
{
	T value = l / r;

	std::cout << value << std::endl;
	return value;
}