#include <iostream>
using namespace std;
int main()
{
    //�������
    //allΪȫ��ʮ������odd��¼������even��¼ż����odd��even����10��
    int all[10],odd[10],even[10];
    //i,jΪѭ������
    int i=0,j=0;
    //��������10������all, iΪall���±�
    for(;i<10;i++){
        cin>>all[i];
    }
    //numOdd��numEven�ֱ��¼������ż���ĸ���
    int numOdd=0;
    int numEven=0;
    //��������all, �����ǰall[i]Ϊ���������odd[numOdd]��
    //ż������even[numEven]
    for(i=0;i<10;i++){
        if(all[i]%2!=0){//����
            odd[numOdd]=all[i];
            numOdd++;
        }else {//ż��
            even[numEven]=all[i];
            numEven++;
        }
    }
    // ��oddѡ������
    for(i=0;i<numOdd-1;i++){
        for(j=i;j<numOdd;j++){
            if(odd[j]>odd[i]){//tmpΪ��ʱ����
                int tmp=odd[i];
                odd[i]=odd[j];
                odd[j]=tmp;
            }
        }
    }
    // ��evenѡ������
    for(i=0;i<numEven-1;i++){
        for(j=i;j<numEven;j++){
            if(even[j]<even[i]){
                int tmp=even[i];
                even[i]=even[j];
                even[j]=tmp;
            }
        }
    }
    //�������
    for(i=0;i<numOdd;i++){
        cout<<odd[i]<<" ";
    }
    //���ż��
    for(i=0;i<numEven;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    return 0;
}