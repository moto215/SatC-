#include "Trun.h"
#include "CharacterProcess.h"

void Trun::process(CharacterProcess cp)
{
	cp.attack();
	trunCount_++;
}