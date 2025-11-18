#pragma once
#include<memory>
#include"IScene.h"
#include"TitleScene.h"
#include"StageScene.h"
#include"ClearScene.h"

class GameManager : public IScene
{
private:
	std::unique_ptr<IScene>sceneArr_[3];


	int currentSceneNo_;
	int prevSceneNo_;
public:
	GameManager();
	~GameManager();
	

	// ISceneの純粋仮想関数を実装
	void Initialize() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;

	int Run();
};

