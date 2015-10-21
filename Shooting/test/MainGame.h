#pragma once
#include <vector>
#include "GameScene.h"
#include "Enemy1.h"
#include "Player1.h"
#include "NormalBullet.h"

using namespace std;         //  –¼‘O‹óŠÔŽw’è

class MainGame : public SceneBase
{
public:
	MainGame();
	~MainGame();
	SceneBase* Update(GameScene*);
	void Draw(GameScene*);
	
private:
	KeyManager* m_KeyManager;
	int m_image;
	Enemy1* m_enemy;
	PlayerBase* m_player;
	vector<BulletBase*> m_bulletList;
};


