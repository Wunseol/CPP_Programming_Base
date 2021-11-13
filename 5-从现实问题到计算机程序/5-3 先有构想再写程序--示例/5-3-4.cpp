#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "\t Ä¸¼¦\t\t ¹«¼¦\t\t Ð¡¼¦" << endl;
    for (x = 0; x <= 33; x++)
    for (y = 0; y <= 50; y++)
    {
    z = 100 - x - y;
    if ((3 * x + 2 * y + 0.5*z) == 100)
    cout << "\t" << x << "\t\t"
    << y << "\t\t" << z << endl;
    }
    return 0;
}