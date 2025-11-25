#pragma once

class Enemy
{
public:
	Enemy();
	~Enemy();
	void Update();
	void Draw();

	int posX_;
	int posY_;
	int radius_;
	int speedX_;
	int speedY_;
	int windowsideR;
	int windowBottom;
	int windowsideL;
	int windowTop;





};

