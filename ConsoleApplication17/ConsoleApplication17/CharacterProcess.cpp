#include "CharacterProcess.h"
#include <stdlib.h>
#include <iostream>

void CharacterProcess::attack()
{
	// 攻撃力をランダムな値に設定
	player_->param.attack = rand() % 21;
	slime_->param.attack = rand() % 11;
	goblin_->param.attack = rand() % 11;

	// プレイヤーの攻撃
	if (enemy1) 
	{
		slime_->param.hp -= player_->param.attack;
	}
	else if(enemy2)
	{
		goblin_->param.hp -= player_->param.attack;
	}

	// 死んでるか判定して除外する
	if (slime_->param.hp <= deathHP)
	{
		enemy1 = false;
	}
	if (goblin_->param.hp <= deathHP)
	{
		enemy2 = false;
	}
	
	// 敵の攻撃
	if (enemy1) 
	{
		player_->param.hp -= slime_->param.attack;
	}
	if (enemy2)
	{
		player_->param.hp -= goblin_->param.attack;
	}

	// 残りHP表示
	std::cout << player_->param.hp << std::endl;
	std::cout << slime_->param.hp << std::endl;
	std::cout << goblin_->param.hp << std::endl;
}