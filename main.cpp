#include <Novice.h>

#include "GameManager.h"

const char kWindowTitle[] = "LE2D_21_マスダ_アキヒロ_PG3_04_01_ステートパターン";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);


	GameManager* gameManager = new GameManager();

	gameManager->Run();

	delete gameManager;

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
