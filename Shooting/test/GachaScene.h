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
	int x;
	int y;
	int ghandle;
};

