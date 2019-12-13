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
#ifndef EXAMPLE__H
#define EXAMPLE__H

typedef tagMyStruct
{
    unsigned char u8Element;
    unsigned int  u32Element;
}MyStruct_t;

extern unsigned int g_u32Var; //全局变量，在头文件中,参数名前加'g_'表示静态变量，'u32'表示数据类型

extern void vExampleFunc(void); //全局函数，在头文件中

#endif
