#pragma once //��ֹͷ�ļ��ظ�����
#include<iostream> //�������������ͷ�ļ�
#include"worker.h"
#include"employee.h";
#include"Boss.h"
#include"Manager.h"
#include<fstream>
#define FILENAME "empFile.txt"
using namespace std; //ʹ�ñ�׼�����ռ�
class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼Ա������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ�յı�־
	bool m_FileIsEmpty;

	//ͳ���ļ��е�����
	int get_EmpNum();

	//��ʼ��Ա�� 
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ���Ƿ���� ������ڷ���ְ����������λ�� �����ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//���������
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~WorkerManager();
};