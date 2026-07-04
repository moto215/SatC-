#include <iostream>
#include <time.h>
#include "Character.h"
#include "Trun.h"
#include "CharacterProcess.h"

int main()
{
	Trun trun;

	srand((unsigned int)time(NULL));

	Character* pPlayer = new Character;
	Character* pSlime = new Character;
	Character* pGoblin = new Character;

	std::cout << pPlayer->param.hp << std::endl;
	std::cout << pSlime->param.hp << std::endl;
	std::cout << pGoblin->param.hp << std::endl;

	CharacterProcess cp;
	cp.player_ = std::shared_ptr<Character>(pPlayer);
	cp.slime_ = std::shared_ptr<Character>(pSlime);
	cp.goblin_ = std::shared_ptr<Character>(pGoblin);

	trun.process(cp);

	//while (true)
	//{
	//	trun.process(cp);
	//	break;
	//}

	return 0;
}