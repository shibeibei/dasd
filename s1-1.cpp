#include<iostream>

#include<fstream>

using namespace std;



int main()

{

         int a[100];//����һ������

         int sum=0;//�ܺͱ�����ʼ��

         ifstream Data("D:\\data.txt");

         if(!Data)

         {cout<<"���ܴ��ļ�";exit(1);}//�ж��ļ��Ƿ��ܱ���

         for(int i=0;Data>>a[i],i<100;i++)

         {

                   sum+=a[i];//���ӷ�

         }

         cout<<sum;



         return 0;

}
