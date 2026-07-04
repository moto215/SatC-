#pragma once
#include <iostream>

template<class T>
T add(T l, T r) 
{
	T value = l + r;

	std::cout << value << std::endl;
	return value;
}

template<class T>
T sub(T l, T r)
{
	T value = l - r;

	std::cout << value << std::endl;
	return value;
}

template<class T>
T mul(T l, T r)
{
	T value = l * r;

	std::cout << value << std::endl;
	return value;
}

template<class T>
T spl(T l, T r)
{
	T value = l / r;

	std::cout << value << std::endl;
	return value;
}