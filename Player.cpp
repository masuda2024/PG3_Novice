#include <Novice.h>
#include "Player.h"
#include"Bullet.h"

Player::Player()
{

	posX_ = 640;
	posY_ = 560;
	speedX_ = 5;
	speedY_ = 5;
	radius_ = 20;

	windowsideR = 1280;
	windowBottom = 720;
	windowsideL = 0;
	windowTop = 0;


	//bullet = new  Bullet();

}

Player::~Player()
{
	delete bullet;

}

void Player::Update(char* keys)
{
	if (keys[DIK_W])
	{
		posY_ -= speedY_;
	}
	if (keys[DIK_A])
	{
		posX_ -= speedX_;
	}
	if (keys[DIK_S])
	{
		posY_ += speedY_;
	}
	if (keys[DIK_D])
	{
		posX_ += speedX_;
	}



	if (posY_ - radius_ < windowTop)
	{
		posY_ = windowTop + radius_;
	}
	if (posX_ - radius_ < windowsideL)
	{
		posX_ = windowsideL + radius_;
	}
	if (posY_ + radius_ > windowBottom)
	{
		posY_ = windowBottom - radius_;
	}
	if (posX_ + radius_ > windowsideR)
	{
		posX_ = windowsideR - radius_;
	}

	/*
	if (!bullet->isShot_)
	{
		if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
		{
			bullet->isShot_ = true;
			bullet->posX_ = posX_;
			bullet->posY_ = posY_ - radius_;
		}
	}*/
    


	//bullet->Update();
}

void Player::Draw()
{


//	bullet->Draw();


	Novice::DrawEllipse
	(
		posX_, posY_, radius_, radius_,
		0.0f, WHITE, kFillModeSolid
	);
}