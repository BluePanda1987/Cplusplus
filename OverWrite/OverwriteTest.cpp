/*
 * OverwriteTest.cpp
 *
 *  Created on: Mar 9, 2014
 *      Author: lixin
 */

#include "OverwriteTest.h"
#include<iostream>
using namespace std;

namespace Overwrite {

OverwriteTest::OverwriteTest() {
	cout<<"OverwriteTest::OverwriteTest"<<endl;

}

OverwriteTest::~OverwriteTest() {
	cout<<"OverwriteTest::~OverwriteTest"<<endl;
}

void OverwriteTest::OverwriteTestMethod()
{
	cout<<"OverwriteTest::OverwriteTestMethod subclass"<<endl;
}

} /* namespace Overwrite */
