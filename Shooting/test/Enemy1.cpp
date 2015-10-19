#include "Enemy1.h"

Enemy1::Enemy1()
{
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