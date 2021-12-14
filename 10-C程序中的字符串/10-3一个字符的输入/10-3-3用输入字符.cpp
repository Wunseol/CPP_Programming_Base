// 方法三：用 cin.get(char) 输入字符
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter a sentence:"<<endl;
    while(cin.get(c))
    cout<<c;
    return 0;
    
}