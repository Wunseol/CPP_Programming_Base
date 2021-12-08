#include <iostream>
using namespace std;
int main()
{
    int i = 0,sum = 0;
    i = 1;
loop: 
    sum = sum + i;
    i++;
    cout << sum << endl;
    goto loop;
    return 0;
}