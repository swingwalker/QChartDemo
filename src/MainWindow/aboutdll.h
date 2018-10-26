#ifndef ABOUTDLL_H
#define ABOUTDLL_H

#include "enum.h"
#include <string>

class QWidget;

namespace Sinfotek
{
    /**********************************************************************************************************************
     * Copyright (C), 2003-2015, Sinfotek Technology Co., Ltd.
     * ��    ��:     AboutDll
     * ��    ��:     ����ǿ
     * ��    ��:     V1.0
     * ��    ��:     2015-12-13 22:42:40
     * ��    ��:     �������ڹ����������About���ڽ��棬�����������캯�������ݲ�ͬ���������������ɸ���ʾ�رսӿں���
     ���ԶԹ��ڽ��������ʾ���ز�����ʹ��ʱ����ʹ�ù��캯������About����ʵ������ʹ�ýӿں���������ʾ������
     * ����˵��:     ��������ڶ�̬���ɹ��ڽ��棬���ɸ��ݴ���Ĳ������ɲ�ͬ�Ĺ��ڽ��棬����ʹ����ö���������������ɵ���ʽ��
     ʹ�õĹ�˾�����У�һ����ʽ��about�����Ӧһ���࣬Ŀǰ��Default��Ĭ�ϣ���Standard����׼����Simple���򵥣�
     ��Dialog���Ի��򣩵�������ʽ���ֱ��Ӧ�˹����µ�FirstAbout��SecondAbout��ThirdAbout��FourthAbout�ĸ��ࡣ
     ֮����������µ���ʽ�����´������࣬���б�д���ɣ������˽�ǿ�Ŀ���չ�ԡ�
     *
     * ��    ʷ:
     *
     *   1. ����:    //YYYY-MM-DD HH:mm:SS
     *      ����:    //���� ����
     *      �޸�˵��://
     *
     *   2. ...
     ********************************************************************************************************************/
    class __declspec(dllexport) AboutDll
    {
    public:
        AboutDll(
            MainStyle mainStyle,                                                        //������ʽ
            const std::string& strEngTitle,                                             //Ӣ������
            const std::string& strChaTitle,                                             //��������
            const std::string& strMainText,                                             //��Ҫ��������
            Company company,                                                            //ʹ�ù�˾
            int iCopyRightTime,                                                         //��Ȩʱ��
            double dSoftWareVersion,                                                    //����汾
            int iColorR,                                                                //����ɫϵRֵ
            int iColorG,                                                                //����ɫϵGֵ
            int iColorB,                                                                //����ɫϵBֵ
            QWidget *parent = 0                                                         //������
            );

        AboutDll(
            MainStyle mainStyle,
            const std::string& strEngTitle,
            const std::string& strChaTitle,
            int iCopyRightTime,
            double dSoftWareVersion,
            QWidget *parent = 0
            );

        AboutDll(MainStyle mainStyle, QWidget *parent = 0);

        void ShowAbout();                                                               //��ʾ���ڽ���
        void HideAbout();                                                               //�رչ��ڽ���
        void SetAboutCenter();                                                          //����About����λ�����������м�
        void SetAboutPos(int iGlobalX, int iGlobalY);                                   //����About����λ��������Ļ��λ��
        void DestoryAbout();                                                            //����About�������

        ~AboutDll();

    private:
        QWidget    *_pQWidgetAbout;                                                     //QWidget����ָ�룬ָ�򴴽���About�������
        QWidget    *_pQWidgetParent;                                                    //QWidget����ָ�룬ָ�򸸴��ڶ���

    private:
        MainStyle _MainStyle;                                                           //��Ա�������洫��Ľ�����ʽ����
        std::string _strEngTitle;                                                       //��Ա�������洫���Ӣ�ı������
        std::string _strChaTitle;                                                       //��Ա�������洫������ı������
        std::string _strMainText;                                                       //��Ա�������洫�����Ҫ��Ϣ����
        Company _Company;                                                               //��Ա�������洫���ʹ�ù�˾����
        int _iCopyRightTime;                                                            //��Ա�������洫��İ�Ȩʱ�����
        double _dSoftWareVersion;                                                       //��Ա�������洫�������汾����
        int _iColorR;                                                                   //��Ա�������洫���ɫϵRֵ����
        int _iColorG;                                                                   //��Ա�������洫���ɫϵGֵ����
        int _iColorB;                                                                   //��Ա�������洫���ɫϵBֵ����

    private:
        void CreateAbout();                                                             //˽�й��ܺ��������ڴ���About�������
    };
}

#endif // ABOUTDLL_H
