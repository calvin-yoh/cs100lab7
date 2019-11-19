#ifndef __POW_HPP__
#define __POW_HPP__

#include <cmath>
#include "base.hpp"
#include "op.hpp"

class Pow : public Base {
    public:
        Pow(Base* value1,Base* value2) : Base()
 {
        this->left = value1;
        this->right = value2;
 }
        double evaluate() { return pow(this->left->evaluate(),this->right->evaluate());}
        std::string stringify()
        {
                return this->left->stringify() + " ^ " + this->right->stringify();
        }
};

#endif //__POW_HPP__

