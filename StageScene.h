#pragma once
#include "IScene.h"
#include<math.h>
#define USE_MATH_DEFINES




class StageScene : public IScene 
{

public:
	int distanceX;
	int distanceY;
	int distanceXY;
	int r;

	int Alive = true;


	int enemyCoolTime = 100;

	void Initialize() override;
	void Update(char* keys, char* preKeys)override;
	void Draw() override;
};

