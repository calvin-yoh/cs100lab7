#include <iostream>
#include <vector>
#include <string>
#include "base.hpp"
#include "op.hpp"
#include "Mult.hpp"
#include "Sub.hpp"
#include "Add.hpp"
#include "Div.hpp"
#include "Factory.hpp"

using namespace std;

int main()
{
	char input;
	vector<char> vect;
	Base* answer;
	Factory* fact = new Factory();
	while(cin >> input && input != 'q')
	{
		vect.push_back(input);
	}

	answer = fact->parse(vect);
	cout << answer->stringify() << " = " << answer->evaluate() << endl;
	
	


}
