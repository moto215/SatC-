#include <stdio.h>
#include <iostream>

void func(int num) 
{
    std::cout << "引数がint型" << std::endl;
}

void func(char* ptr) 
{
    std::cout << "引数がポインタ" << std::endl;
    if (ptr == nullptr) 
    {
        std::cout << "中身はnullptr" << std::endl;
    }
}

int main()
{
    func(nullptr);
    // NULLは0として認識される
    func(NULL);
    return 0;
}