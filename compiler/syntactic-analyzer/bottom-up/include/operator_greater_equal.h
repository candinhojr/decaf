#ifndef _OPERATOR_GREATER_EQUAL_
#define _OPERATOR_GREATER_EQUAL_

#include "operator_binary.h"

class OperatorGreaterEqual : public OperatorBinary{
	public:
		OperatorGreaterEqual(Expression * expression1_, Expression * expression2_) :
			OperatorBinary(expression1_, expression2_) {}

		void toString(){
			std::cout << "OperatorGreaterEqual: {";
			if(expression1 != nullptr){
				std::cout << "leftExpression: ";
				expression1->toString();
				std::cout << ",";
			}
			if(expression2 != nullptr){
				std::cout << "rightExpression: ";
				expression2->toString();
				std::cout << ",";
			}
			std::cout << "}";
		}
};

#endif