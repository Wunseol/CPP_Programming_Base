// 方法二：用 cin.get( ) 输入字符
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout <<"enter a sentence:"<<endl;
    while((c=cin.get())!=EOF)
    cout<<c;
    return 0;

}