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
	int get_a_button() { return m_a_button; }
	int get_b_button() { return m_b_button; }
	int get_c_button() { return m_c_button; }
	int get_d_button() { return m_d_button; }
	int get_e_button() { return m_e_button; }
	int get_f_button() { return m_f_button; }
	int get_g_button() { return m_g_button; }
	int get_h_button() { return m_h_button; }
	int get_i_button() { return m_i_button; }
	int get_j_button() { return m_j_button; }
	int get_k_button() { return m_k_button; }
	int get_l_button() { return m_l_button; }
	int get_m_button() { return m_m_button; }
	int get_n_button() { return m_n_button; }
	int get_o_button() { return m_o_button; }
	int get_p_button() { return m_p_button; }
	int get_q_button() { return m_q_button; }
	int get_r_button() { return m_r_button; }
	int get_s_button() { return m_s_button; }
	int get_t_button() { return m_t_button; }
	int get_u_button() { return m_u_button; }
	int get_v_button() { return m_v_button; }
	int get_w_button() { return m_w_button; }
	int get_x_button() { return m_x_button; }
	int get_y_button() { return m_y_button; }
	int get_z_button() { return m_z_button; }
	int get_back_button() { return m_back_button; }
	int get_tab_button() { return m_tab_button; }
	int get_return_button() { return m_return_button; }
	int get_lshift_button() { return m_lshift_button; }
	int get_rshift_button() { return m_rshift_button; }
	int get_escape_button() { return m_escape_button; }
	int get_space_button() { return m_space_button; }

private:
	//ボタンの読み込み！
	int m_key;

	int m_up_button;
	int m_down_button;
	int m_right_button;
	int m_left_button;
	int m_a_button;
	int m_b_button;
	int m_c_button;
	int m_d_button;
	int m_e_button;
	int m_f_button;
	int m_g_button;
	int m_h_button;
	int m_i_button;
	int m_j_button;
	int m_k_button;
	int m_l_button;
	int m_m_button;
	int m_n_button;
	int m_o_button;
	int m_p_button;
	int m_q_button;
	int m_r_button;
	int m_s_button;
	int m_t_button;
	int m_u_button;
	int m_v_button;
	int m_w_button;
	int m_x_button;
	int m_y_button;
	int m_z_button;
	int m_back_button; //バックスペースキー 
	int m_tab_button; // タブキー
	int m_return_button; // エンターキー
	int m_lshift_button; // 左シフトキー
	int m_rshift_button; // 右シフトキー
	int m_escape_button; // エスケープキー
	int m_space_button; // スペースキー
};
