#include "GameManager.h"
#include <Novice.h>

GameManager::GameManager()
{
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	sceneNo = TITLE;
}

GameManager::~GameManager(){}

int GameManager::Run()
{
	while(Novice::ProcessMessage() == 0)
	{
		Novice::BeginFrame();
		
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();
		
		if(prevSceneNo_ != currentSceneNo_)
		{
			sceneArr_[currentSceneNo_]->Initialize();
		}
		
		static char keys[256] = { 0 };
		static char preKeys[256] = { 0 };
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);
		
		sceneArr_[currentSceneNo_]->Update(keys, preKeys);
		sceneArr_[currentSceneNo_]->Draw();
		Novice::EndFrame();
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0)
		{
			break;
		}
	}
	return 0;
}
