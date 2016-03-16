#include<iostream>
#include <string>
#include <conio.h>
using namespace std;
int count(char *s,int *m);
int main()
{
 char buffer[83]={81};
 char *s=new char[128];
 int n;
 cout<<"Input a string:";
 s=cgets(buffer);
 n=count(s,flag);
 for (int i=0;i<n;i++)
 {
 cout<<flag[i]<<" ";
 }
 cout<<endl;
 return 0;
}
int count(char *s,int *m)
{
 int j=0;
 for(int i=0;s[i]!='\0';i++)
 {
 if (s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122) //为字母时
{
m[j]++;
 }
else if(s[i-1]>=65&&s[i-1]<=90||s[i-1]>=97&&s[i-1]<=122) //非字母数据
{
j++;
 }
 }
 if (m[j]==0) //当结束为非字母时
 {
j--;
 }
 return j+1;
}
