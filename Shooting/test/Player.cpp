#include "Player.h"

Player::Player(float posX, float posY)
{
	m_image = LoadGraph("1.bmp");
	m_pos.x = posX;
	m_pos.y = posY;
}

Player::Player()
{
	m_image = LoadGraph("1.bmp");
	m_pos.x = 0;
	m_pos.y = 0;
}

Player::~Player()
{
}

void Player::Update(KeyManager* p_keyManager)
{
	if (p_keyManager->get_up_button() == HOLD) {
		m_pos.y -= 0.5f;
	}
	if (p_keyManager->get_down_button() == HOLD) {
		m_pos.y += 0.5f;
	}
	if (p_keyManager->get_left_button() == HOLD) {
		m_pos.x -= 0.5f;
	}
	if (p_keyManager->get_right_button() == HOLD) {
		m_pos.x += 0.5f;
	}
}

void Player::Draw()
{
	DrawGraph(m_pos.x, m_pos.y, m_image, TRUE);
}
