

#include"stdafx.h"
#include<iomanip>
#include<fstream>
#include<cstring>
#include <iostream>//
using namespace std;
struct word{//���ʽṹ
	char c[30];//���õ���
	int n;//���õ��ʳ��ִ���
}w[10000];

void  main(void)

{
	char b[30], Str[30000];//���嵥�����飬�ַ�������
	ifstream infile("A_Tale_of_Two_Cities.txt"); //�����ļ��������ļ�ֱ�ӷ���ͬĿ¼��
	if (!infile)
	{
		cout << "���ܴ��ļ�";
	}
	while (!infile.eof())
	{
		infile.getline(Str, 30000);
	}
	infile.close();

	int i = 0, m = 1, k = 0, flag = 0, x = 0;

	Str[x - 1] = '\0';
	x = 0;
	while (Str[x]){
		if ('A' <= Str[x] && Str[x] <= 'Z' || 'a' <= Str[x] && Str[x] <= 'z') {//�ж��Ƿ��ǵ���
			b[i++] = Str[x];//����ǵĻ����ַ��ŵ�����������

			flag = 1;
		}
		else if (flag){
			b[i] = '\0';
			flag = m = 0;
			for (i = 0; i < k; i++){
				if (strcmp(b, w[i].c) == 0){//�Ƚϵ����Ƿ���ͬ
					m = 1;
					break;
				}
			}
			if (!m){
				w[k].n = 1;
				strcpy_s(w[k++].c, b);//����ͬ�ͱ���
			}
			else w[i].n++;//��ͬ�����ִ�����1
			i = 0;
		}
		x++;
	}
	ofstream outfile("Result.txt");
	for (i = 0; i < k; i++)
		outfile << w[i].c << "   " << w[i].n << endl;//����������ʽṹ�еĵ��ʺ͸������ļ���
	cout << endl;
}




	