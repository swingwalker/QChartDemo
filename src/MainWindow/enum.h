/**********************************************************************************************************************
 * Copyright (C), 2003-2015, Sinfotek Technology Co., Ltd.
 * 文 件 名:     enum.h
 * 作    者:     朱文强 15051988935@163.com
 * 版    本:     V1.0
 * 日    期:     2015-12-14 10:42:40 
 * 描    述:     本文件包含两个枚举，供About动态库使用，用于选择界面样式及使用公司。目前其中的类型仅如下几样，之后若有
                 新的版式或新的使用公司，可进行扩充
 * 其他说明:     此文件还可供使用About动态库的用户使用，使用本文件中的枚举类型来选择合适的样式及公司
 ********************************************************************************************************************/
#pragma once


namespace Sinfotek
{
    /**********************************************************************************************************************
    * Copyright (C), 2003-2015, Sinfotek Technology Co., Ltd.
    * 类    名:     MainStyle
    * 作    者:     朱文强 15051988935@163.com
    * 版    本:     V1.0
    * 日    期:     2015-12-14 10:46:39
    * 描    述:     本枚举用于选择About界面的样式，其中包括Default（默认样式）对应第一种About（FirstAbout类），Standard（标准样式）
    对应第二种About样式（SecondAbout类），Dialog（对话框样式）对应第三种About（ThirdAbout类），Simple（简单样式）
    对应第四种About样式（FourthAbout类）
    * 其他说明:     无
    ********************************************************************************************************************/
    enum __declspec(dllexport) MainStyle
    {
        DEFAULT,
        STANDARD,
        DIALOG,
        SIMPLE
    };

    /**********************************************************************************************************************
    * Copyright (C), 2003-2015, Sinfotek Technology Co., Ltd.
    * 类    名:     Company
    * 作    者:     朱文强 15051988935@163.com
    * 版    本:     V1.0
    * 日    期:     2015-12-14 10:49:54
    * 描    述:     本枚举用于选择使用About界面的公司，根据不同的公司，界面上显示的Logo，公司名称，公司网站等信息都应不同，
    目前包含类型：BeiJingSinfotek：北京尚水信息技术股份有限公司
    NanJingSinfotek：南京思孚泰科信息技术有限公司
    * 其他说明:     目前仅有BeiJingSinfotek包含的Logo资源最为全面，南京公司Logo暂时沿用北京总公司，在后续设计出新的图片资源
    及网站资源后，可轻松添加
    ********************************************************************************************************************/
    enum __declspec(dllexport) Company
    {
        BEIJINGSINFOTEK,
        NANJINGSINFOTEK
    };
}

