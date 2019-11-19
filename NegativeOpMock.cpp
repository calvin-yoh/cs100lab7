#include "base.hpp"
class NegativeOpMock: public Base{
   public:
      NegativeOpMock(){};
      virtual double evaluate() { return -4.5;}
      virtual string stringify() {return "-4.5;}
}

