#pragma once
#include<string>
#include"worker.h"

//������
class Boss : public Worker
{
public:
	Boss(int id, string name, int dId);

	//��ʾ������Ϣ
	virtual void ShowInfo();

	//��ȡ��λ����
	virtual string getDeptName();

};
