#include "Player1.h"



Player1::Player1(float posX, float posY)
{
	m_life = 1;
	m_image = LoadGraph("1.bmp");
	m_pos.x = posX;
	m_pos.y = posY;
}


Player1::~Player1()
{
}

void Player1::Update(KeyManager* p_keyManager)
{
	if (p_keyManager->get_up_button() == HOLD) {
		m_pos.y -= 1.0f;
	}
	if (p_keyManager->get_down_button() == HOLD) {
		m_pos.y += 1.0f;
	}
	if (p_keyManager->get_left_button() == HOLD) {
		m_pos.x -= 1.0f;
	}
	if (p_keyManager->get_right_button() == HOLD) {
		m_pos.x += 1.0f;
	}
}

void Player1::Draw()
{
	DrawGraph(m_pos.x, m_pos.y, m_image, TRUE);
}