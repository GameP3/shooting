#pragma once
#include "GameScene.h"
class GachaScene :
	public SceneBase
{
public:
	GachaScene();
	~GachaScene();
	SceneBase* Update(GameScene*);
	void Draw(GameScene*);

private:
	//���W
	int x;
	int y;
	int Random_value;
	int Color;
	int money;
	int chara;
	//�L�[����
	KeyManager* m_KeyManager;
};

