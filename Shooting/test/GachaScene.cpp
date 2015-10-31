#include "GachaScene.h"
#include "Title.h"


GachaScene::GachaScene()
{
	m_KeyManager = new KeyManager();
	x = 300;
	y = 400;
	money = 100000;

}

GachaScene::~GachaScene()
{
	delete (m_KeyManager);
}

SceneBase * GachaScene::Update(GameScene *)
{
	SceneBase* next = this;

	FILE *fp;
	errno_t error;
	if ((error = fopen_s(&fp,"Data\\SaveData.dat","rb"))!=0)
	{
		printfDx("�t�@�C���ǂݍ��ݎ��s");
		ScreenFlip();
	}
	else 
	{
		//�f�[�^�ǂݍ���
		fread(&money,sizeof(money),1,fp);
		fclose(fp);
	}

	m_KeyManager->KeyCheck();
	if (m_KeyManager->get_up_button() == HOLD)
	{
		//�^�C�g���ɖ߂�
		clsDx();
		next = new Title();
	}

	//�K�`����
	if (m_KeyManager->get_down_button() == PUSH)
	{
		money -= 10;
		//�����擾
		Color = GetColor(0, 255, 0);
		Random_value = GetRand(3);
		
		DrawFormatString(100, 100, Color, "%d", Random_value);

		//�������Z�[�u
		FILE *fp;
		if ((error = fopen_s(&fp, "Data\\SaveData.dat", "wb")) != 0)
		{
			printfDx("�t�@�C���������ݎ��s");
			ScreenFlip();
		}
		else
		{
			fwrite(&money, sizeof(money), 1, fp);
			fclose(fp);
		}
	}

	return next;
}

void GachaScene::Draw(GameScene * scene)
{
	clsDx();
	printfDx("��J�[�\�������Ń^�C�g���֖߂�\n");
	printfDx("���J�[�\�������ŃK�`����\n");
	printfDx("�������F%d\n", money);
	
	ScreenFlip();
}
