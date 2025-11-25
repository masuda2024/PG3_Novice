#pragma once
#include"Bullet.h"
class Player
{
public:
	Player();
	~Player();
	void Update(char* keys);
	void Draw();

public:
	int posX_;
	int posY_;
	int radius_;
	int speedX_;
	int speedY_;
	int windowsideR;
	int windowBottom;
	int windowsideL;
	int windowTop;
	Bullet* bullet;
};

