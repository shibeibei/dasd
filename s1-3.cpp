#include<iostream>
#include<fstream>
using namespace std;

ArraySum(int l,int min,int max)
{
int *a,sum=0,i;
a=new int[l];
ifstream f("d:\\������Դ1.txt");
for(i=0;f>>a[i],i<l;i++)
{if(a[i]>=min&&max>=a[i])
 sum+=a[i];
}
cout<<"�������Ϊ��"<<sum<<endl;
}

void main()
{
double min,max;
cout<<"���뷶Χ��Сֵ��";
cin>>min;
cout<<"���뷶Χ���ֵ��";
cin>>max;
int l=0;
cout<<"�������鳤��Ϊ��";
cin>>l;
ArraySum(l,min,max);
}
