// 方法二：用cin.get( )函数输入
#include <iostream>
using namespace std;
int main()
{
    char ch[20];
    cout<<"enter a sentence:"<<endl;
    cin.get(ch,10,'o');
    cout<<ch<<endl;
    return 0;
}