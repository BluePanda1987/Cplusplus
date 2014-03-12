/*
 * Input.h
 *
 *  Created on: Mar 10, 2014
 *      Author: lixin
 */

#ifndef INPUT_H_
#define INPUT_H_

namespace IO {

class Input {
public:
	Input();
	virtual ~Input();

	void getLine();
	void getChar();
	void getString();
};

} /* namespace Hide */

#endif /* INPUT_H_ */
