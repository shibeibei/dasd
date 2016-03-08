#include<iostream>
#include<fstream>
using namespace std;

ArraySum(int l,int min,int max)
{
int *a,sum=0,i;
a=new int[l];
ifstream f("d:\\数据来源1.txt");
for(i=0;f>>a[i],i<l;i++)
{if(a[i]>=min&&max>=a[i])
 sum+=a[i];
}
cout<<"数组求和为："<<sum<<endl;
}

void main()
{
double min,max;
cout<<"输入范围最小值：";
cin>>min;
cout<<"输入范围最大值：";
cin>>max;
int l=0;
cout<<"输入数组长度为：";
cin>>l;
ArraySum(l,min,max);
}
