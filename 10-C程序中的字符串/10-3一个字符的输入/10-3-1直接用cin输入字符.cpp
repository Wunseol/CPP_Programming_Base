// 方法一：直接用cin输入字符
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout <<"enter a sentence:"<<endl;
    while(cin>>c)
    cout<<c;
    return 0;
}