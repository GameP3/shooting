#pragma once

#include "GameScene.h"
#include "Player.h"

class Title : public SceneBase
{
public:
	Title();
	~Title();
	SceneBase* Update(GameScene*);
	void Draw(GameScene*);
private:
	KeyManager* m_KeyManager;

	Player* m_Player;
};

