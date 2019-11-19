#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
class Op : public Base {
private:
	double val;
    public:
        Op(double value) : Base()
 {
	this->val = value;
	this->left = NULL;
	this->right = NULL;
 }
        double evaluate() { return val; }
        std::string stringify() {std::string s = std::to_string(val); return s; }
};

#endif //__OP_HPP__
