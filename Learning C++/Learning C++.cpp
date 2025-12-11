#include <iostream>

using std::cout;
using std::cin;
using std::endl;

namespace example {
    int a = 1;
}

int main()
{
    int a = 0;
    cout << example::a << endl;
    cout << "Hello World!\n";
}
