#ifndef _STMT_FOR_
#define _STMT_FOR_

#include "stmt.h"
#include "expression.h"

class StatementFor : public Statement{
	
	public:
		Expression * expression1;
		Expression * expression2;
		Expression * expression3;
		Statement * forStatement;
		StatementFor(Expression * expression1_, Expression * expression2_, 
					 Expression * expression3_, Statement * forStatement_) :
			expression1{expression1_}, expression2{expression2_}, 
			expression3{expression3_}, forStatement{forStatement_} {}
		void toString(){
			std::cout << "StatementFor: {";
			if(expression1 != nullptr){
				std::cout << "condition1: "; 
				expression1->toString();
				std::cout << ",";
			}
			if(expression2 != nullptr){
				std::cout << "condition2: "; 
				expression2->toString();
				std::cout << ",";
			}
			if(expression3 != nullptr){
				std::cout << "condition3: "; 
				expression3->toString();
				std::cout << ",";
			}
			if(forStatement != nullptr){
				std::cout << "statement: ";
				forStatement->toString();
				std::cout << ",";
			}	
			std::cout << "}";
		}
};

#endif