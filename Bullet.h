#pragma once
class Bullet
{
public:
	int posX_;
	int posY_;
	int radius_;
	int speedX_;
	int speedY_;
	int isShot_;
public:
	Bullet();
	void Update();
	void Draw();

};

