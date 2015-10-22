
#include "MainGame.h"

//コンストラクタ


MainGame::MainGame()
{
	m_image = LoadGraph("02_スピードダウン.bmp");
	m_KeyManager = new KeyManager();
	m_player = new Player1(300.0f, 400.0f);
	m_enemy = new Enemy1(300.0f, 10.0f);

}

MainGame::~MainGame()
{
	delete(m_KeyManager);
	delete(m_enemy);
	delete(m_player);
}

SceneBase* MainGame::Update(GameScene*)
{
	SceneBase* next = this;
	m_KeyManager->KeyCheck();

	m_player->Update(m_KeyManager);
	m_enemy->Update(m_KeyManager);
	static int count = 30;//確認用
	if (count-- == 0) {
		count = 30;
		float dx = 0;
		float dy = 0;
		dx = (m_enemy->GetPos().x - m_player->GetPos().x);
		dy = (m_enemy->GetPos().y - m_player->GetPos().y);
		float r = atan2(dy, dx);//２点の座標から角度作成
		m_bulletList.push_back(new NormalBullet(m_player->GetPos().x, m_player->GetPos().y, r));
	}
	// バレットを逆イテレータで回して更新
	for (vector<BulletBase*>::reverse_iterator it = m_bulletList.rbegin(); it != m_bulletList.rend(); ++it)
	{
		(*it)->Update(m_KeyManager);

		//DrawFormatString(0, 300, GetColor(255, 255, 255), "rot=%d", (*it)->GetRot());
	}

	return next;
}

void MainGame::Draw(GameScene*) {
	m_player->Draw();
	m_enemy->Draw();
	for (vector<BulletBase*>::reverse_iterator it = m_bulletList.rbegin(); it != m_bulletList.rend(); ++it)
	{
		(*it)->Draw();
		
	}
}