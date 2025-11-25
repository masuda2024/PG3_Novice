#include "StageScene.h"
#include <Novice.h>
#include<math.h>
#define USE_MATH_DEFINES

#include"Player.h"
#include"Enemy.h"
#include"Bullet.h"

Player* player = new Player();
Bullet* bullet = new Bullet();
Enemy* enemy = new Enemy();


void StageScene::Initialize(){}

void StageScene::Update(char* keys, char* preKeys) 
{


	//bullet->posX_ = player->posX_;
	//bullet->posY_ = player->posY_;




	if (!bullet->isShot_)
	{
		if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
		{
			bullet->isShot_ = true;
			bullet->posX_ = player->posX_;
			bullet->posY_ = player->posY_ - player->radius_;
		}
	}




	distanceX = (bullet->posX_ - enemy->posX_);
	distanceY = (bullet->posY_ - enemy->posY_);

	distanceXY = static_cast<int>(sqrt(distanceX * distanceX + distanceY * distanceY));
	
 	r = bullet->radius_ + enemy->radius_;

	if(distanceXY<=r)
	{
		Alive = false;
	}

	player->Update(keys);
	bullet->Update();

	if (Alive == 1)
	{
		enemy->Update();
	}
	
	
	if (preKeys[DIK_R])
	{
		Alive = true;
	}


	// スペースキーで次のシーン（クリア）へ
	if (preKeys[DIK_C] == 0 && keys[DIK_C] != 0) 
	{

		sceneNo = CLEAR;
	}
}

void StageScene::Draw() 
{
	player->Draw();
	
	if (Alive == 1)
	{
		enemy->Draw();
	}
	bullet->Draw();


	Novice::ScreenPrintf(0, 0, "Curernt Scene : Stage");
	Novice::ScreenPrintf(0, 30, "Push C : Next Scene");
	Novice::ScreenPrintf(0, 60, "Push R : Enemy Reset");
}