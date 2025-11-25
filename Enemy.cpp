#include <Novice.h>
#include "Enemy.h"
#include"Bullet.h"

Enemy::Enemy()
{
	posX_ = 640;
	posY_ = 100;
	speedX_ = 5;
	speedY_ = 5;
	radius_ = 30;

	windowsideR = 1280;
	windowBottom = 720;
	windowsideL = 0;
	windowTop = 0;

}

Enemy::~Enemy()
{
	

}

void Enemy::Update()
{


	


	posX_ += speedX_;
	if(posX_+radius_> windowsideR || posX_ - radius_ < windowsideL)
	{
		speedX_ *= -1;
	}
	

}

void Enemy::Draw()
{
	
	Novice::DrawEllipse
	(
		posX_, posY_, radius_, radius_,
		0.0f, BLUE, kFillModeSolid
	);
	
}