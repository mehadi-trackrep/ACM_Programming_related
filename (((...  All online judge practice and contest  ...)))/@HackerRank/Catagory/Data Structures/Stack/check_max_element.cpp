#include <iostream>
#include <stack>
using namespace std;

void copyStack(MyStack &firstStack, MyStack &secondStack)
{
    if(!firstStack.empty())    {
        string x=firstStack.top();
        firstStack.pop();
        //secondStack.push(x);
        copyStack(firstStack,secondStack);
        secondStack.push(x);
        firstStack.push(x);
    }
}
string getMax(MyStack &stack)
{
    string a=stack.top();
    stack.pop();
    getMax(stack,a);
    stack.push(a);
    return a;
}

void getMax(MyStack &stack,string &max)
{
    if(stack.empty()!=true)
    {
        string x=stack.top();
        if(x>max)
            max=x;
        stack.pop();
        getMax(stack,max);
        stack.push(x);
    }
}

int main()
{

    return 0;
}
