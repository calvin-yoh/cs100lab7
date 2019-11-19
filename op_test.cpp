#include "gtest/gtest.h"
#include "op.hpp"
#include "base.hpp"

#include "Mult.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
#include "Add.hpp"
#include "Div.hpp"

TEST(OpTest, OpEvaluateEight) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateNegative)
{
        Op* test = new Op(-5);
        EXPECT_EQ(test->evaluate(),-5);
}

TEST(OpTest, OpEvaluateString)
{
        Op* test = new Op(8);
        EXPECT_EQ(test->stringify(),"8");
}

TEST(MultTest, MultEvaluate)
{
        Base* val1 = new Op(7);
        Base* val2 = new Op(4);
        Base* test = new Mult(val1, val2);
        EXPECT_EQ(test->evaluate(), 28);
}

TEST(MultTestOne, MultStringify)
{
	Base* val1 = new Op(7);
	Base* val2 = new Op(4);
	Base* test = new Mult(val1, val2);
	EXPECT_EQ(test->stringify(),"28.000000");

}
TEST(AddTest, AddEvaluate)
{
        Base* val1 = new Op(7);
        Base* val2 = new Op(4);
        Base* test = new Add(val1, val2);
        EXPECT_EQ(test->evaluate(), 11);
}
TEST(DivTest, DivEvaluate)
{
        Base* val1 = new Op(8);
        Base* val2 = new Op(4);
        Base* test = new Div(val1, val2);
        EXPECT_EQ(test->evaluate(), 2);
}

TEST(PowTest, PowEvaluate)
{
        Base* val1 = new Op(2);
        Base* val2 = new Op(3);
        Base* test = new Pow(val1, val2);
        EXPECT_EQ(test->evaluate(), 8);
}
TEST(SubTest, SubEvaluate)
{
        Base* val1 = new Op(7);
        Base* val2 = new Op(4);
        Base* test = new Sub(val1, val2);
        EXPECT_EQ(test->evaluate(), 3);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

