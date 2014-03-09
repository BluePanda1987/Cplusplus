/*
 * HideTest.h
 *
 *  Created on: Mar 9, 2014
 *      Author: lixin
 */

#ifndef HIDETEST_H_
#define HIDETEST_H_

#include "HideBase.h"

namespace Hide {

class HideTest: public HideBase {
public:
	HideTest();
	virtual ~HideTest();

	void HideTestMethod1(int i, int j);

	void OtherMethodTest();
};

} /* namespace Hide */

#endif /* HIDETEST_H_ */
