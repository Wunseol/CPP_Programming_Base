#include <iostream>
using namespace std;
int main()
{
    char grade='a';
    cin>>grade;
    switch(grade)
    {
        case 'a': cout << "85бл100" << endl;
        case 'b': cout << "70бл84" << endl;
        case 'c': cout << "60бл69" << endl;
        case 'd': cout << "г╝60" << endl;
        default: cout << "error" << endl;
    }
    return 0;
}