class stack
{
    public:
        stack();
        void push(int);
	int  pop();
	void displayStack();
	struct stackType *sp;
	int numOfElements;
};
