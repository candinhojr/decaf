#ifndef _CONSTANT_
#define _CONSTANT_

#include "expression.h"

class Constant : public Expression{
	public:
		virtual void toString(){
			std::cout << "CONSTANT!";
		}
		virtual void generate() override{}
};

#endif