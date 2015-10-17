//author: âV“¡ —I‹L

#pragma once

#include "DxLib.h"

#define FREE 0				//	‰Ÿ‚³‚ê‚Ä‚¢‚È‚¢
#define HOLD 1				//	‰Ÿ‚³‚ê‚Ä‚¢‚é
#define PUSH 2				//	‰Ÿ‚µ‚½uŠÔ
#define PULL 3				//	—£‚µ‚½uŠÔ

class KeyManager
{
public:
	KeyManager();

	void KeyCheck();
	void KeyUpData(int *, int BYTE);
	//ƒ{ƒ^ƒ“
	int get_up_button()			{return m_up_button;}
	int get_down_button() { return m_down_button; }
	int get_right_button() { return m_right_button; }
	int get_left_button() { return m_left_button; }

private:
	//ƒ{ƒ^ƒ“‚Ì“Ç‚İ‚İI
	int m_key;

	int m_up_button;
	int m_down_button;
	int m_right_button;
	int m_left_button;
};
