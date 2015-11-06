#include "Title.h"
#include "MainGame.h"
#include "GachaScene.h"

Title::Title()
{
	m_KeyManager = new KeyManager();
	//�{�^���摜
	m_title_image[0] = LoadGraph("image\\button\\Start.png");
	m_title_image[1] = LoadGraph("image\\button\\gacha.png");
	m_title_image[2] = LoadGraph("image\\button\\exit.png");
	//��\���{�^���摜
	m_title_mono[0] = LoadGraph("image\\button\\Start_gray.png");
	m_title_mono[1] = LoadGraph("image\\button\\gacha_gray.png");
	m_title_mono[2] = LoadGraph("image\\button\\exit_gray.png");
}

Title::~Title()
{
	delete(m_KeyManager);
}

SceneBase* Title::Update(GameScene*) 
{
	SceneBase* next = this;
	m_KeyManager->KeyCheck();

	if (m_KeyManager->get_up_button() == PUSH)
	{
		m_select_key += m_title_count - 1;
		m_select_key %= m_title_count;
	}
	if (m_KeyManager->get_down_button() == PUSH)
	{
		m_select_key++;
		m_select_key %= m_title_count;
	}
	if (m_KeyManager->get_return_button() == PUSH)
	{
		switch (m_select_key)
		{
		case 0:
			next = new MainGame();//�Q�[���X�^�[�g
			break;
		case 1:
			next = new GachaScene();//�K�`���y�[�W�ɔ��
			break;
		case 2:
			// �c�w���C�u�����g�p�̏I������
			break;
		}
	}
	return next;
}
void Title::Draw(GameScene*) 
{
	DrawString(200,100,"�����őI���B�@Enter�Ō���B",GetColor(255,255,255));
	//Start�{�^��
	if (m_select_key == 0)
	{
		DrawRotaGraph(320, 240, 1.0, 0.0, m_title_image[0], TRUE);
	}
	else {
		DrawRotaGraph(320, 240, 0.8, 0.0, m_title_mono[0], TRUE);
	}
	//�K�`���y�[�W�{�^��
	if (m_select_key == 1)
	{
		DrawRotaGraph(320, 320, 1.0, 0.0, m_title_image[1], TRUE);
	}else {
		DrawRotaGraph(320, 320, 0.8, 0.0, m_title_mono[1], TRUE);
	}
	//�I���{�^��
	if (m_select_key == 2)
	{
		DrawRotaGraph(320, 400, 1.0, 0.0, m_title_image[2], TRUE);
	}
	else {
		DrawRotaGraph(320, 400, 0.8, 0.0, m_title_mono[2], TRUE);
	}
	ScreenFlip();
}
