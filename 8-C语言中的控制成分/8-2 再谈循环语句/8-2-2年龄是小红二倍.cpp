// 小红10岁,父亲33岁,问多少年之后,父亲的年龄是小红的二倍?
#include<iostream>
using namespace std;
int main()
{

    int ageOfHong = 10, ageOfFather = 33, count = 0;
    while (2 * ageOfHong != ageOfFather)
    {
    ageOfHong++;
    ageOfFather++;
    count++;
    }
    cout << count;
    return 0;
}