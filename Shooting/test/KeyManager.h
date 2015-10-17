//author: 齋藤 悠記

#pragma once

#include "DxLib.h"

#define FREE 0				//	押されていない
#define HOLD 1				//	押されている
#define PUSH 2				//	押した瞬間
#define PULL 3				//	離した瞬間

class KeyManager
{
public:
	KeyManager();

	void KeyCheck();
	void KeyUpData(int *, int BYTE);
	//ボタン
	int get_up_button()			{return m_up_button;}
	int get_down_button() { return m_down_button; }
	int get_right_button() { return m_right_button; }
	int get_left_button() { return m_left_button; }

private:
	//ボタンの読み込み！
	int m_key;

	int m_up_button;
	int m_down_button;
	int m_right_button;
	int m_left_button;
};
