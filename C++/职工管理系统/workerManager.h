#pragma once
#include<iostream>
#include"worker.h"
using namespace std;

#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();
	
	//��������
	~WorkerManager();
	//ϵͳ�˳�����
	void exitSystem();

	//��¼�ļ��е���������
	int m_EmpNum;

	//Ա�������ָ��
	Worker** m_EmpArray;
	
	//����Ա��
	void Add_Emp();

	//�����ļ�
	void save();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//����ְ������ж�ְ���Ƿ���� �����ڷ���ְ���������е�λ�� �����ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����Ա��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();
};