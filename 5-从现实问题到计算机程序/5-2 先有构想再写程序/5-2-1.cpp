#include <iostream>
using namespace std;
int main()
{
    int blockCount = 0; 
    int i = 0, N = 0;
    cin>>N; 
    blockCount = 1; 
    for (i = 1; i <= N; i++)
    blockCount = blockCount + i;
    cout<<"������"<<blockCount<<"��"<<endl;
    return 0;
}