#ifndef __Sub_HPP__
#define __Sub_HPP__

#include "base.hpp"
#include "op.hpp"

class Sub : public Base {
    public:
        Sub(Base* value1,Base* value2) : Base()
        {
        this->left = value1;
        this->right = value2;
        }
        double evaluate() { return this->left->evaluate() - this->right->evaluate();}
        std::string stringify()
        {
                return this->left->stringify() + " - " + this->right->stringify();
        }
};
#endif //__SUB_HPP__

