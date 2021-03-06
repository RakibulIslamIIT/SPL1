#include "header.h"
#define MAX_SIZE_STACK 100


class MY_STACK
{
    private:
        char arr[100];
        int top=0;

    public:
        void stackPush(char n);
        char stackPop();
        void printStack();
};

class MY_INT_STACK
{
    private:
        int arr[100];
        int top=0;

    public:
        void stackPush(int n);
        int stackPop();
        void printStack();
};
