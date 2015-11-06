#pragma once
#include "GameScene.h"
#include "Player1.h"

class Title:
	public SceneBase
{
public:
	Title();
	~Title();
	SceneBase* Update(GameScene*);
	void Draw(GameScene*);
private:
	KeyManager* m_KeyManager;
	int m_title_count = 3;//タイトルボタンの個数
	int m_title_image[3];//ボタン画像
	int m_title_mono[3];//非表示ボタン画像

	int m_select_key = 0;
};
