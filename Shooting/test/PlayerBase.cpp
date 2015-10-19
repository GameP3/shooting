#include "PlayerBase.h"

PlayerBase::PlayerBase(float posX, float posY)
{
	m_life = 1;
	//m_image = LoadGraph("1.bmp");
	m_pos.x = posX;
	m_pos.y = posY;
}

PlayerBase::PlayerBase()
{
	m_image = LoadGraph("1.bmp");
	m_pos.x = 0;
	m_pos.y = 0;
}

PlayerBase::~PlayerBase()
{
}


