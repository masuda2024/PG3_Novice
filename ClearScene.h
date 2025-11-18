#pragma once
#include "IScene.h"

class ClearScene : public IScene
{

public:

	void Initialize() override;
	void Update();
	void Draw() override;
};

