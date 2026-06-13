#include "MyClass.h"

MyClass* instantiateMyClass() 
{
    return new MyClass;  // MyClass のインスタンスを動的に作成して返す
}

void destroyMyClass(MyClass*& obj) 
{
    if (obj == NULL) 
    {
        return;
    }

    delete obj;  // MyClass のインスタンスを解放
    obj = NULL;  // 削除後のポインタ変数を NULL で初期化、参照渡しのため呼び出し元にも反映される
}

MyClass::~MyClass() 
{
    std::cout << "デストラクタ" << std::endl;
}