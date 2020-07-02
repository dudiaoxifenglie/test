#include<iostream>
using namespace std;

//标识符命名规则
//1、标识符不准有关键字
//2、标识符由数字、字母、下划线组成
//3、标识符的第一个子字符必须是字母或者下划线
//4、标识符区分大小写

int main()
{
	//1、标识符不可以是关键字
	//int int=12;

	//2、标识符由数字、字母、下划线组成
	int abc=10;
	int _abc=10;
	int _123abc=10;

	//标识符的第一个字符必须是字母或者下划线
	//int 123abc=10;

	//标识符区分大小写
	int aaa=100;
	cout<<aaa<<endl;

	//建议：给变量取名的时候，最好能够见名知意

	system("pause");
	return 0;
}

