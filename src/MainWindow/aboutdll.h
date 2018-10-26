#ifndef ABOUTDLL_H
#define ABOUTDLL_H

#include "enum.h"
#include <string>

class QWidget;

namespace Sinfotek
{
    /**********************************************************************************************************************
     * Copyright (C), 2003-2015, Sinfotek Technology Co., Ltd.
     * 类    名:     AboutDll
     * 作    者:     朱文强
     * 版    本:     V1.0
     * 日    期:     2015-12-13 22:42:40
     * 描    述:     本类用于构造主程序的About关于界面，包含两个构造函数，根据不同需求构造界面对象。若干个显示关闭接口函数
     可以对关于界面进行显示隐藏操作。使用时，先使用构造函数构造About界面实例，再使用接口函数进行显示或隐藏
     * 其他说明:     本类可用于动态生成关于界面，即可根据传入的参数生成不同的关于界面，其中使用了枚举类型来区分生成的样式及
     使用的公司。其中，一种样式的about界面对应一个类，目前有Default（默认）、Standard（标准）、Simple（简单）
     、Dialog（对话框）等四种样式，分别对应此工程下的FirstAbout、SecondAbout、ThirdAbout、FourthAbout四个类。
     之后若想添加新的样式，重新创建新类，进行编写即可，保留了较强的可扩展性。
     *
     * 历    史:
     *
     *   1. 日期:    //YYYY-MM-DD HH:mm:SS
     *      作者:    //姓名 邮箱
     *      修改说明://
     *
     *   2. ...
     ********************************************************************************************************************/
    class __declspec(dllexport) AboutDll
    {
    public:
        AboutDll(
            MainStyle mainStyle,                                                        //界面样式
            const std::string& strEngTitle,                                             //英文名称
            const std::string& strChaTitle,                                             //中文名称
            const std::string& strMainText,                                             //主要描述内容
            Company company,                                                            //使用公司
            int iCopyRightTime,                                                         //版权时间
            double dSoftWareVersion,                                                    //软件版本
            int iColorR,                                                                //界面色系R值
            int iColorG,                                                                //界面色系G值
            int iColorB,                                                                //界面色系B值
            QWidget *parent = 0                                                         //父窗口
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

        void ShowAbout();                                                               //显示关于界面
        void HideAbout();                                                               //关闭关于界面
        void SetAboutCenter();                                                          //设置About界面位于主窗口正中间
        void SetAboutPos(int iGlobalX, int iGlobalY);                                   //设置About界面位于整个屏幕的位置
        void DestoryAbout();                                                            //销毁About界面对象

        ~AboutDll();

    private:
        QWidget    *_pQWidgetAbout;                                                     //QWidget类型指针，指向创建的About界面对象
        QWidget    *_pQWidgetParent;                                                    //QWidget类型指针，指向父窗口对象

    private:
        MainStyle _MainStyle;                                                           //成员变量保存传入的界面样式参数
        std::string _strEngTitle;                                                       //成员变量保存传入的英文标题参数
        std::string _strChaTitle;                                                       //成员变量保存传入的中文标题参数
        std::string _strMainText;                                                       //成员变量保存传入的主要信息参数
        Company _Company;                                                               //成员变量保存传入的使用公司参数
        int _iCopyRightTime;                                                            //成员变量保存传入的版权时间参数
        double _dSoftWareVersion;                                                       //成员变量保存传入的软件版本参数
        int _iColorR;                                                                   //成员变量保存传入的色系R值参数
        int _iColorG;                                                                   //成员变量保存传入的色系G值参数
        int _iColorB;                                                                   //成员变量保存传入的色系B值参数

    private:
        void CreateAbout();                                                             //私有功能函数，用于创建About界面对象
    };
}

#endif // ABOUTDLL_H
