#include <iostream>
using namespace std;

void main(){
	cout << "hello world!!!";
	cout << endl;

	//ָ�����ͣ�
	int* p;
	p = new int[3];//����3��int���ʹ洢�ռ�
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

	//�������� ��������һ��int��Ȼ������int&(���ͺ��&����)����ȡ���ø�����
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
	//ָ�������
	int*& ps = s;
	//���õ�ָ��
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