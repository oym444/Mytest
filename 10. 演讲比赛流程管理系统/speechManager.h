#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"speaker.h"
#include<string>
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>
using namespace std;



//����ݽ�����������
class SpeechManager
{
public:
    //���캯��
    SpeechManager();

    //չʾ�˵�
    void show_Menu();

    //�˳�����
    void exitSystem();

    //��������
    ~SpeechManager();

    //����12��ѡ��
    void createSpeaker();

    //��ʼ���� �����������̿��ƺ���
    void startSpeech();

    //��ǩ
    void speechDraw();

    //����
    void speechContest();

    //��ʾ�÷�
    void showScore();

    //�����¼
    void saveRecord();

    //��ȡ��¼
    void loadRecord();

    //�ļ�Ϊ�յı�־
    bool fileIsEmpty;

    //�����¼
    map<int, vector<string>> m_Record;  //key����ڼ��� ��value��¼�������Ϣ

    //��ʾ����÷�
    void showRocord();

    //����ļ�
    void clearRocord();

    //��ʼ������������
    void initSpeech();

    //��Ա����
    //�����һ�ֱ���ѡ�ֱ������
    vector<int>v1;

    //��һ�ֽ���ѡ�ֱ������
    vector<int>v2;

    //ʤ��ǰ����ѡ�ֱ������
    vector<int>vVictory;
    
    //��ű���Լ���Ӧ����ѡ������
    map<int, Speaker>m_Speaker;

    //��ű�������
    int m_index;
};