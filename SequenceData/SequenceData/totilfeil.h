#ifndef __TOTILLFEIL_H
#define __TOTILLFEIL_H


#define MAXSIZE  20

struct SqList                 //顺序存储结构
{
	int data[MAXSIZE];
	int length;
};                   //LOC(ai)=LOC(a1)+(i-1)*C         (计算地址的方式‘C代表一个数据占的字节数)

#endif

