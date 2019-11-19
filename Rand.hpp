#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
class Rand : public Base {
	private:
		double val;  
  public:
        Rand(double value) : Base()
 {
	this->val = value;
	this->left = NULL;
	this->right = NULL;	
 }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { string s = to_string(value); return s; }
};

#endif //__RAND_HPP__
~                       
