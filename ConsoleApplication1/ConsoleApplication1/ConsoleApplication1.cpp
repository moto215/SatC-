#include <iostream>
#include <stdio.h>

class Animal
{
public:
	virtual void cry() = 0;
};

class Dog : public Animal
{
public:
	void cry() override 
	{
		std::cout << "犬" << std::endl;
	}
};

class Cat : public Animal
{
public:
	void cry() override
	{
		std::cout << "猫" << std::endl;
	}
};

int main()
{
	Animal* animals[] = { new Dog, new Cat };

	for (int i = 0; i < std::size(animals); i++) 
	{
		animals[i]->cry();
	}

	for (int i = 0; i < std::size(animals); i++)
	{
		delete animals[i];
		animals[i] = nullptr;
	}
}