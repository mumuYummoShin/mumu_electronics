/*==============================================================================
*
*                                 木目智能电子
*
*产品名称 : 
*
*文件名称 : example.c
*实现功能 : 示例文件，此处添加该文件的相关说明，实现功能等
*软件作者 : Yummo
*创建时间 : 2019-11-07
==============================================================================*/
#include <stdio.h>
#include "example.h"

static unsigned int s_u32Var; //文件作用域参数在开头声明

static void s_vExampleFunc(void); //文件作用域函数在开头声明

/********************************************************************************
*函数定义: void g_vExampleFunc(void)
*函数功能: 接口函数定义，调用文件作用域函数
*修改记录: 
*日期:                作者:                摘要:
      19-11-06             YummoShin            Create
********************************************************************************/
void g_vExampleFunc(void)
{
    g_u32Var = 1;
    s_u32Var = 1;
    s_vExampleFunc();
}

/********************************************************************************
*函数定义: static void s_vExampleFunc(void)
*函数功能: 文件作用域函数在主调函数后面
*修改记录: 
*日期:                作者:                摘要:
      19-11-06             YummoShin            Create
********************************************************************************/
static void s_vExampleFunc(void)
{
    return 0;
}
