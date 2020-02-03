#include<iostream>


void testFunc()
{
    std::cout << "2";
}





int main (void)
{

    void* f = testFunc;

    ((void (*)(void)) f)();

    return 0;
}
