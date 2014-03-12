/*
 * Input.cpp
 *
 *  Created on: Mar 10, 2014
 *      Author: lixin
 */

#include "Input.h"
#include<iostream>
#include<string>
using namespace std;

namespace IO {

Input::Input()
{
	// TODO Auto-generated constructor stub
}

Input::~Input()
{
	// TODO Auto-generated destructor stub
}

void Input::getLine()
{
    std::cout <<"std::getline method\r\n" ;

    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << ", nice to meet you.\n\r";
}

void Input::getChar()
{
	std::cout <<"getchar method is from c.\r\n" ;

	char a=  getchar();
	cout<<a<<endl;
}
void Input::getString()
{

}

} /* namespace Hide */
