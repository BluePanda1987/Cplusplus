/*
 * OverwriteBase.h
 *
 *  Created on: Mar 9, 2014
 *      Author: lixin
 */

#ifndef OVERWRITEBASE_H_
#define OVERWRITEBASE_H_

namespace Overwrite {

class OverwriteBase {
public:
	OverwriteBase();
	virtual ~OverwriteBase();

	virtual void OverwriteTestMethod();
	//void OverwriteTestMethod();
};

} /* namespace Overwrite */

#endif /* OVERWRITEBASE_H_ */
