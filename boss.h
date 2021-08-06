#pragma once
#include<string>
#include"worker.h"

//经理类
class Boss : public Worker
{
public:
	Boss(int id, string name, int dId);

	//显示个人信息
	virtual void ShowInfo();

	//获取岗位名称
	virtual string getDeptName();

};
