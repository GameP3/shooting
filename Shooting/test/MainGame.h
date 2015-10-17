#pragma once

#include "GameScene.h"

class MainGame : public SceneBase
{
public:
	MainGame();
	~MainGame();
	SceneBase* Update(GameScene*);
	void Draw(GameScene*);
	
private:
	int m_image;
};


