#include<iostream>

#include<fstream>

using namespace std;



int main()

{

         int a[100];//定义一个数组

         int sum=0;//总和变量初始化

         ifstream Data("D:\\data.txt");

         if(!Data)

         {cout<<"不能打开文件";exit(1);}//判断文件是否能被打开

         for(int i=0;Data>>a[i],i<100;i++)

         {

                   sum+=a[i];//做加法

         }

         cout<<sum;



         return 0;

}
