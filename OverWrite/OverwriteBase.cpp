/*
 * OverwriteBase.cpp
 *
 *  Created on: Mar 9, 2014
 *      Author: lixin
 */

#include "OverwriteBase.h"
#include<iostream>
using namespace std;

namespace Overwrite {

OverwriteBase::OverwriteBase() {
	cout<<"OverwriteBase::OverwriteBase"<<endl;

}

OverwriteBase::~OverwriteBase() {
	cout<<"OverwriteBase::~OverwriteBase"<<endl;
}

void OverwriteBase::OverwriteTestMethod()
{
	cout<<"OverwriteBase::OverwriteTestMethod base class"<<endl;
}

} /* namespace Overwrite */
