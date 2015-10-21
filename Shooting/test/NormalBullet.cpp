#include "NormalBullet.h"


NormalBullet::NormalBullet(float posX, float posY)
{
	m_image = LoadGraph("image\\Bullet\\bullet1.png");
	m_speed = 3;
	m_rot = 0;
	m_pos.x = posX;
	m_pos.y = posY;
}


NormalBullet::~NormalBullet()
{
}

void NormalBullet::Update(KeyManager *)
{
	m_pos.x += cos(m_rot) * m_speed;      // x座標を更新
	m_pos.y += sin(m_rot) * m_speed;      // y座標を更新
}

void NormalBullet::Draw()
{
	DrawGraph(m_pos.x, m_pos.y, m_image, TRUE);
}
