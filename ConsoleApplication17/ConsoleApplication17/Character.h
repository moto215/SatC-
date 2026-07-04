#pragma once

struct Parameter
{
    int hp;
    int attack;
};

class Character
{
public:
    // コンストラクタ
    Character();
public:
    Parameter param;
};