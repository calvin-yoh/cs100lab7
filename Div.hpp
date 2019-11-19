#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include "op.hpp"

class Div : public Base {
    public:
        Div(Base* value1,Base* value2) : Base() 
	{
        this->left = value1;
	this->right = value2; 
        }
        double evaluate() { return this->left->evaluate() / this->right->evaluate();}
        std::string stringify()
        {
                return this->left->stringify() + " / " + this->right->stringify();
        }
};
#endif //__DIV_HPP__

