#include <iostream>
using namespace std;
int main()
{
    signed int a=0x7FFFFFFF;
    a+=1;
    cout<<dec<<a<<endl;
    return 0;
}