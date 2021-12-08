#include <iostream>
using namespace std;
int main()
{
    char grade='a';
    cin>>grade;
    switch(grade)
    {

        case 'a': cout << "85бл100" << endl;
        default: cout << "error" << endl;
        case 'b': cout << "70бл84" << endl;
        case 'c':
        case 'd':
        case 'e':
        case 'f': cout << "60бл69" << endl;
        case 'g': cout << "г╝60" << endl;
        
    }
    return 0;
}