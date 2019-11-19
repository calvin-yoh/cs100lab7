#include "Factory.hpp"
#include <vector>
int Factory::checkOp(char operation)
{
	if(operation == '+')
	{
		return 1;
	}
	if(operation == '-')
        { 
                return 2;
        }
	if(operation == '*')
        { 
                return 3;
        }
	if(operation == '/')
        { 
                return 4;
        }	
}

Base* Factory::parse(vector<char> vect)
{
	vector<char> operations;
	vector<char> values;
	Base* valOne;
	Base* valTwo;
	Base* val;
	char valueToChange;
	int newVal;
	int check;
	for(int i = 0; i < vect.size(); i++)
	{
		if(vect.at(i) == '*' || vect.at(i) == '+' || vect.at(i) == '/' || vect.at(i) == '-' )
		{
			operations.push_back(vect.at(i));
		}
		else if(vect.at(i) == '1' || vect.at(i) == '2' || vect.at(i) == '3' || vect.at(i) == '4' || vect.at(i) == '5' || vect.at(i) == '6' || vect.at(i) == '7' || vect.at(i) == '8' || vect.at(i) == '9')
		{
			values.push_back(vect.at(i));
		}
		else
		{
			return NULL;
		}
	}
	if(values.size() - operations.size() != 1)
	{
		return NULL;
	}
	valueToChange = values.at(0);
        newVal = valueToChange - '0';
       	valOne = new Op(newVal);
	valueToChange = values.at(1);
        newVal = valueToChange - '0';
        valTwo = new Op(newVal);
	check = checkOp(operations.at(0));
	switch(check)
	{
		case 1: 
			val = new Add(valOne, valTwo);			
			break;
		case 2:
			val = new Sub(valOne, valTwo);
			break;
		case 3:
			val = new Mult(valOne, valTwo);
			break;
		case 4: 
			val = new Div(valOne, valTwo);		
			break;
	}
	for(int i = 2; i < values.size(); i++)
	{
		valOne = val;
		valueToChange = values.at(i);
	        newVal = valueToChange - '0';
        	valTwo = new Op(newVal);
		check = checkOp(operations.at(i-1));
 	       	switch(check)
        	{
                	case 1:
                        	val = new Add(valOne, valTwo);  
                        	break;
                	case 2:
                        	val = new Sub(valOne, valTwo);
                        	break;
               		case 3:
                        	val = new Mult(valOne, valTwo);
                        	break;
                	case 4:
                        	val = new Div(valOne, valTwo);
                        	break;
        	}
	}
	return val;
}

