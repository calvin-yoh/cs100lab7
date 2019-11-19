class HundredOpMock: public Base {
    public:
        HundredOpMock() { };

        virtual double evaluate() { return 100.0; }
        virtual string stringify() { return "100.0"; }
}
