/*
 * OverloadTest.h
 *
 *  Created on: Mar 9, 2014
 *      Author: lixin
 */

#ifndef OVERLOADTEST_H_
#define OVERLOADTEST_H_

namespace Overload {

class OverloadTest {
public:
	OverloadTest();
	virtual ~OverloadTest();

	int overload(int a, int b);
	int overload(long a, long b);
	int overload(int a, char b);
	int overload(float a, float b);
	int overload(double a, double b);
// 此时将会产生歧义
//	Overload::OverloadTest testLoad;
//	int test = testLoad.overload(0);

	int overload(char* a);
	//int overload(int* a);

	//返回参数是不能够重载的
//	void overload(int a, int b);
};

} /* namespace Overload */

#endif /* OVERLOADTEST_H_ */
