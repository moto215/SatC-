#include "Character.h"
#include <stdlib.h>

Character::Character() 
{
	// 50‚©‚ç100‚Ü‚Å‚Ìƒ‰ƒ“ƒ_ƒ€‚È’l‚ð“n‚·
	param.hp = rand() % 51 + 50;
}