Exercise 4.6: Write an expression to determine whether an int value is
even or odd

-------------------------------------------------------------------------

#include <iostream>

using namespace std;
int main()
{
    int i;
    std::cin >> i;
    if (i % 2 == 0)
    {
        cout<< "i is even number";
    }
    else
    {
        cout<< "i is odd number";
    }

    return 0;
}
