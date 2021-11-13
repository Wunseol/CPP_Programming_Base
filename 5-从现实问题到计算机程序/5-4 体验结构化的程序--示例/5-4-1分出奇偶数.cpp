#include <iostream>
using namespace std;
int main()
{
    int all[10],odd[10],even[10]; //odd记录奇数、even记录偶数
    int i=0,j=0;//i,j为循环计数变量
    for(;i<10;i++){
        cin>>all[i];//输入10个数
    }
    int numOdd=0;//numOdd，numEven分别记录奇数、偶数的个数
    int numEven=0;
    for(i=0;i<10;i++){//遍历数组all,奇数放入odd，偶数放入even
        if(all[i]%2!=0){
            odd[numOdd]=all[i];
            numOdd++;//奇数
        }else{
            even[numEven]=all[i];
            numEven++;//偶数
        }
    }
    for(i=0;i<numOdd;i++){
        cout<<odd[i]<<" "<<endl;//输出奇数
    }
    for(i=0;i<numEven;i++){
        cout<<even[i]<<" ";//输出偶数
    }
    return 0;
}