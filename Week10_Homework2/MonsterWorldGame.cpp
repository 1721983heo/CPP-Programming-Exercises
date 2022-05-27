#include "MonsterWorld.h"
#include "VariousMonster.h"
#include "Human.h"
#include <time.h>
void main()
{
	srand((unsigned int)time(NULL));
	int w = 16, h = 8;

	MonsterWorld game(w, h);

	game.add(new Zombie("허접한좀비", "§", rand() % w, rand() % h));
	game.add(new Vampire("뱀파이어짱", "★", rand() % w, rand() % h));
	game.add(new KGhost("어쩌다귀신", "♥", rand() % w, rand() % h));
	game.add(new Jiangshi("못먹어도고", "↔", rand() % w, rand() % h));
	game.add(new Jiangshi("못먹어세로", "↕", rand() % w, rand() % h));
	game.add(new Human ("미래의 인류", "?", rand() % w, rand() % h));
	game.play(500, 10);
	printf("----게임종료----------------------\n");
}