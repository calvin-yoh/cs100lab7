class SevenOpMock: public Base {
    public:
        SevenOpMock2() { };

        virtual double evaluate() { return -7.5; }
        virtual string stringify() { return "-7.5"; }
}
