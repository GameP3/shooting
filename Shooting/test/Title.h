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
	int m_title_count = 3;//�^�C�g���{�^���̌�
	int m_title_image[3];//�{�^���摜
	int m_title_mono[3];//��\���{�^���摜

	int m_select_key = 0;
};
