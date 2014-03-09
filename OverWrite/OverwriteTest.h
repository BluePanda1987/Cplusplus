/*
 * OverwriteTest.h
 *
 *  Created on: Mar 9, 2014
 *      Author: lixin
 */

#ifndef OVERWRITETEST_H_
#define OVERWRITETEST_H_

#include "OverwriteBase.h"

namespace Overwrite {

class OverwriteTest: public OverwriteBase {
public:
	OverwriteTest();
	virtual ~OverwriteTest();

	virtual void OverwriteTestMethod();
};

} /* namespace Overwrite */

#endif /* OVERWRITETEST_H_ */
