#pragma once

#include "GameScene.h"
#include "Player1.h"

class Title : public SceneBase
{
public:
	Title();
	~Title();
	SceneBase* Update(GameScene*);
	void Draw(GameScene*);
private:
	KeyManager* m_KeyManager;

	PlayerBase* m_Player;
};

