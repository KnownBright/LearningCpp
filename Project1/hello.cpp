#include <iostream>
using namespace std;

void main(){
	cout << "hello world!!!";
	cout << endl;

	//指针类型，
	int* p;
	p = new int[3];//分配3个int类型存储空间
	for (int i = 0; i < 3; i++)
	{
		cin >> *(p + i);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << (p + i);
		cout << endl;
	}
	int* temp = p;
	cout << *p << "   " << *temp << endl;
	*p = *p + 1;
	cout << *p << "   " << *temp << endl;

	delete p;

	//定义引用 例：申明一个int，然后在用int&(类型后加&符号)，提取引用给别名
	int x = 56;
	int& a = x;
	int& r = a;
	cout << "x:" << x << ",a:" << a << ",r:" << r << endl;
	cout << "&x:" << &x << ",&a:" << &a << ",&r:" << &r << endl;

	r = 25;
	cout << "x:" << x << ",a:" << a << ",r:" << r << endl;
	cout << "&x:" << &x << ",&a:" << &a << ",&r:" << &r << endl;


	int* s = new int[1];
	*s = 10086;
	//指针的引用
	int*& ps = s;
	//引用的指针
	int* q = &(*s);

	/*int t = 111;
	int&* q = */



	while (1)
	{
		int x;
		cin >> x;
		if (x == 0)
		{
			break;
		}
	}
}