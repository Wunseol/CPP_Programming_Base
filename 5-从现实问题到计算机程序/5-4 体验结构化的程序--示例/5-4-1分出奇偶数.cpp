#include <iostream>
using namespace std;
int main()
{
    int all[10],odd[10],even[10]; //odd��¼������even��¼ż��
    int i=0,j=0;//i,jΪѭ����������
    for(;i<10;i++){
        cin>>all[i];//����10����
    }
    int numOdd=0;//numOdd��numEven�ֱ��¼������ż���ĸ���
    int numEven=0;
    for(i=0;i<10;i++){//��������all,��������odd��ż������even
        if(all[i]%2!=0){
            odd[numOdd]=all[i];
            numOdd++;//����
        }else{
            even[numEven]=all[i];
            numEven++;//ż��
        }
    }
    for(i=0;i<numOdd;i++){
        cout<<odd[i]<<" "<<endl;//�������
    }
    for(i=0;i<numEven;i++){
        cout<<even[i]<<" ";//���ż��
    }
    return 0;
}