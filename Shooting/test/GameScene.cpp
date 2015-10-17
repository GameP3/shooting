#include "GameScene.h"
#include "Title.h"

GameScene::GameScene()
{
	m_pChildScene = new Title;
	m_KeyManager = new KeyManager;
}

GameScene::~GameScene()
{
	delete m_pChildScene;
	delete m_KeyManager;
}

void GameScene::Update() 
{
	SceneBase* next = m_pChildScene->Update(this);
	if (next != m_pChildScene)
	{
		delete(m_pChildScene);
		m_pChildScene = next;
	}
}

void GameScene::Draw()
{
	m_pChildScene->Draw(this);
}