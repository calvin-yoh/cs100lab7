#ifndef FACTORY_HPP
#define FACTORY_HPP

#include <iostream>

#include "base.hpp"
#include <vector>
#include "Mult.hpp"
#include "Sub.hpp"
#include "Div.hpp"
#include "Add.hpp"

using namespace std;

class Factory
{
	private: 
		int checkOp(char operation);
	public: 
		Base* parse(vector<char> vect);
};

#endif
