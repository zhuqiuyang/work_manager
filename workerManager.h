#pragma once			// ��ֹͷ�ļ��ظ�����
#include<iostream>		// �������������ͷ�ļ�
using namespace std;		// ʹ�ñ�׼�����ռ�

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>				// ����ͷ�ļ� fstream
#define  FILENAME "empFile.txt"   //����ļ�·���곣��

class WorkerManager
{
public:

    //���캯��
    WorkerManager();

    //��ʾ�˵�
    void Show_Menu();

        //�˳�ϵͳ
        void exitSystem();

    //��¼�ļ��е���������
    int m_EmpNum;
    //Ա�������ָ��
    Worker** m_EmpArray;

    //����ְ��
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

    //����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
    int IsExist(int id);

    //�޸�ְ��
    void Mod_Emp();

    //����ְ��
    void Find_Emp();

    //����ְ��
    void Sort_Emp();

    //����ļ�
    void Clean_File();

    //��������
    ~WorkerManager();

};