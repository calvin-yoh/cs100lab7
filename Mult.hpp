#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include "op.hpp"

class Mult : public Base {
    public:
        Mult(Base* value1,Base* value2) : Base()
 {
	this->left = value1;
	this->right = value2;
 }
        double evaluate() { return this->left->evaluate() * this->right->evaluate();}
        std::string stringify()
 	{
 		return this->left->stringify() + " * " + this->right->stringify(); 
 	}
};

#endif //__MULT_HPP__
                       
