

#include"stdafx.h"
#include<iomanip>
#include<fstream>
#include<cstring>
#include <iostream>//
using namespace std;
struct word{//单词结构
	char c[30];//放置单词
	int n;//放置单词出现次数
}w[10000];

void  main(void)

{
	char b[30], Str[30000];//定义单词数组，字符串数组
	ifstream infile("A_Tale_of_Two_Cities.txt"); //读入文件流，将文件直接放在同目录下
	if (!infile)
	{
		cout << "不能打开文件";
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
		if ('A' <= Str[x] && Str[x] <= 'Z' || 'a' <= Str[x] && Str[x] <= 'z') {//判断是否是单词
			b[i++] = Str[x];//如果是的话将字符放到单词数组中

			flag = 1;
		}
		else if (flag){
			b[i] = '\0';
			flag = m = 0;
			for (i = 0; i < k; i++){
				if (strcmp(b, w[i].c) == 0){//比较单词是否相同
					m = 1;
					break;
				}
			}
			if (!m){
				w[k].n = 1;
				strcpy_s(w[k++].c, b);//不相同就保存
			}
			else w[i].n++;//相同，出现次数加1
			i = 0;
		}
		x++;
	}
	ofstream outfile("Result.txt");
	for (i = 0; i < k; i++)
		outfile << w[i].c << "   " << w[i].n << endl;//依次输出单词结构中的单词和个数到文件中
	cout << endl;
}




	