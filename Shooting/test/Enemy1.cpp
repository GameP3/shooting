#include "Enemy1.h"

Enemy1::Enemy1(float posX, float posY)
{
	m_life = 1;
	m_image = LoadGraph("image\\Enemy\\Enemy1.png");
	m_pos.x = posX;
	m_pos.y = posY;
}


Enemy1::~Enemy1()
{
}
void Enemy1::Update(KeyManager*)
{
}

void Enemy1::Draw()
{
	DrawGraph(m_pos.x, m_pos.y, m_image, TRUE);
}