// 方法四：用 getchar( ) 输入字符
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter a sentence:"<<endl;
    while(c=getchar())
    cout<<c;
    return 0;
    
}