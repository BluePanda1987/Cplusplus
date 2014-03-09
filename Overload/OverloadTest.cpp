/*
 * OverloadTest.cpp
 *
 *  Created on: Mar 9, 2014
 *      Author: lixin
 */

#include "OverloadTest.h"

namespace Overload {

OverloadTest::OverloadTest() {
	// TODO Auto-generated constructor stub

}

OverloadTest::~OverloadTest() {
	// TODO Auto-generated destructor stub
}

int OverloadTest::overload(int a, int b){ return 1;}
int OverloadTest::overload(long a, long b){return 2;}
int OverloadTest::overload(int a, char b){return 3;}
int OverloadTest::overload(double a, double b){return 4;}
int OverloadTest::overload(float a, float b){return 5;}

int overload(char* a){return 8;}
int overload(int* a){return 7;}

} /* namespace Overload */
