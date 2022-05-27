#pragma once
#include "Monster.h"
#include <conio.h>
enum Direction { Left = 75, Right = 77, Up = 72, Down = 80 };

class Human : public Monster {
public:
	Human(string n = "�̷��η�", string i = "?", int px = 0, int py = 0)
		: Monster(n, i, px, py) {}
	~Human() { cout << "[Human ]"; }
	int getDirkey() { return _getche() == 224 ? _getche() : 0; }
	void move(int** map, int maxx, int maxy) {
		if (_kbhit()) {
			char ch = getDirkey();
			if (ch == Left) x--;
			else if (ch == Right) x++;
			else if (ch == Up) y--;
			else if (ch == Down) y++;
			else return;
			clip(maxx, maxy);
			eat(map);
		}
	}
};