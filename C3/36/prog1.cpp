#include <iostream>

using namespace std;

int g_val;

void yo_func(void)
{
    cout << "i can access to global variable from another function without using it as a parameter ";
    cout << ::g_val << endl;
    ::g_val = 5;
    cout << "i can edit the global variable from this function " << ::g_val << endl;
}

int main (void) 
{
    cout << "global variabl without insialisation : " << ::g_val << endl;
    yo_func();
    cout << "and it will change from the int main too " << ::g_val << endl;
    return (0);
}