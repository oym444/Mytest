#include <iostream>
#include"speechManager.h"
#include<map>
#include<string>
#include<ctime>
using namespace std;

int main()
{
    //���������
    srand((unsigned int)time(NULL));
    //�������������
    SpeechManager sm;

    ////����12��ѡ�ִ���
    //for(map<int,Speaker>::iterator it=sm.m_Speaker.begin();it!=sm.m_Speaker.end();it++)
    //{
    //    cout << "ѡ�ֱ�ţ�" << it->first << "������" << it->second.m_name << "������ " << it->second.m_score[0] << endl;
    //}

    int choice = 0; //�����洢�û���ѡ��
    while (true)
    {
        sm.show_Menu();

        cout << "���������ѡ��" << endl;
        cin >> choice; //�����û���ѡ��

        switch (choice)
        {
        case 1: //��ʼ����
            sm.startSpeech();
            break;
        case 2: //�鿴���������¼
            sm.showRocord();
            break;
        case 3: //��ձ�����¼
            sm.clearRocord();
            break;
        case 0:  //�˳�ϵͳ
            sm.exitSystem();
            break;
        default:
            system("cls"); //����
            break;
        }
    }
    sm.show_Menu();  


    system("pause");
    return 0;
}
