#pragma once
#include "DxLib.h"
#include "KeyManager.h"

class SceneBase;
class GameScene
{
private:
	SceneBase* m_pChildScene;
	KeyManager* m_KeyManager;
public:
	GameScene();
	~GameScene();
	void Update();
	void Draw();
};

class SceneBase
{
public:
	virtual ~SceneBase() {};
	virtual SceneBase* Update(GameScene*) = 0;
	virtual void Draw(GameScene*) = 0;
};