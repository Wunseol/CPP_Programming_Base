#include <iostream>
using namespace std;
int main()
{
    char grade='a';
    cin>>grade;
    switch(grade)
    {
        case 'a': cout << "85бл100" << endl;break;
        case 'b': cout << "70бл84" << endl;break;
        case 'c': cout << "60бл69" << endl;break;
        case 'd': cout << "г╝60" << endl;break;
        default: cout << "error" << endl;
    }
    return 0;
}