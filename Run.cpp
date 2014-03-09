/*
 * Run.cpp
 *
 *  Created on: Mar 5, 2014
 *      Author: lixin
 */

#include<iostream>
#include"./Overload/OverloadTest.h"
#include"./OverWrite/OverwriteTest.h"
#include"./Hide/HideTest.h"
#include"./Hide/HideTest2.h"
using namespace std;
using namespace Overwrite;
using namespace Hide;

int main(int argc, char** argv) {
// 静态的多态，overload 重载在参数有冲突的时候编译器会直接提醒报错。
//	Overload::OverloadTest testLoad;
//
//	int test = testLoad.overload(0);
//
//	printf("Hello world, %d", test);

// Overwrite 重写
//	OverwriteBase* overTest = new OverwriteTest();
//	overTest->OverwriteTestMethod();
//	delete(overTest);

// Hide 隐藏是基类无法调用子类的方法？ 子类的对象也无法调用父类的方法
	//隐藏后父类无法调用子类的方法
//	HideBase* hideBase = new HideTest();
//	HideBase* hideBase2 = new HideTest2();
//
//	//明确的无法调用
//	hideBase->HideTestMethod1(1,2);
//
//	hideBase2->HideTestMethod2();
//	delete(hideBase);
//	delete(hideBase2);

//	HideTest* hideTest = new HideTest();
//	HideTest2* hideTest2 = new HideTest2();
//
//	//明确的无法调用
//	hideTest->HideTestMethod1();
//
//	hideTest2->HideTestMethod2();
//
//	delete(hideTest);
//	delete(hideTest2);

	return 0;
}

