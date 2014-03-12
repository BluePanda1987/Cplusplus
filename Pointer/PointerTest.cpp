/*
 * PointerTest.cpp
 *
 *  Created on: Mar 12, 2014
 *      Author: lixin
 */

#include "PointerTest.h"
#include<iostream>
using namespace std;

void pFunction()
{
	cout<<"call pFunction Sucess!"<<endl;
}

void testFunction()
{

	//pointer to array
	int(*p)[100];

	//pointer to function
	//函数的类型由它的返回值类型以及形参列表确定，和函数名无关
	void(*f)();

	//会隐式的转换为 &pFunction
	f = pFunction;

	//要注意的是：如果指向函数的指针没有初始化，或者具有0值(零指针常量)，那么该指针不能在函数调用中使用。
	//只有当指针已经初始化，或被赋值后指向某个函数才能安全地用来调用函数。
	if(f)
	{
		//ANSI C标准将f ( )认为是(*f)( )的简写形式，并且推荐使用f ( )形式，因为它更符合函数调用的逻辑
		f();
		//括号表示解引用
		(*f)();
	}


	//
	f = &pFunction;
	f();
}


