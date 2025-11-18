#pragma once
// シーン名
enum SCENE { TITLE, STAGE, CLEAR };

//インターフェースクラス
class IScene
{
protected:
	//シーン番号管理変数
	static int sceneNo;

public:
	virtual ~IScene();

	virtual void Initialize() = 0;
	virtual void Update(char* keys, char* preKeys) = 0;
	virtual void Draw() = 0;

	int GetSceneNo();
};

