#include <iostream>
using namespace std;
int main()
{
    int nCases,i,nFeet;//nCases ��ʾ����������ݵ�������nFeet ��ʾ����Ľ�����
    cin>>nCases;
    for(i=0;i<nCases;i++){
        cin>>nFeet;
        if(nFeet%2!=0)// ���������ֻ��,�����벻��ȷ,��Ϊ����2 ֻ����4 ֻ������ż��
        cout<<"0 0"<<endl;
        else if(nFeet%4!=0)//��Ҫ������Ŀ���٣�ʹ���ﾡ����4 ֻ��
                           //��Ҫ������Ŀ��࣬ʹ���ﾡ����2 ֻ��
        cout<<nFeet/4+1<<" "<<nFeet/2<<endl;
        else
        cout<<nFeet/4<<" "<<nFeet/2<<endl;

    }
    return 0;
}