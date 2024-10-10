
#include<iostream>
using namespace std;

//缺省参数（从左向右缺省）【错误示范】
//int sum1(int a = 1, int b)
//{
//	return a + b;
//}

//缺省参数（从右向左缺省）
int sum2(int a, int b=1)
{
	return a + b;
}
float operation(double a, double b)
{
	return a + b;
}

int operation(int a, int b)
{
	return a + b;
}



int main()
{
	//这种从左向右缺省的函数参数，实际上就和没有缺省的函数是一样的
	/*int num = sum1(1);*/
	/*int num = sum2(1);
	cout << num << endl;*/

	//函数重载
	/*cout << operation(1, 1) << endl;*/
	cout << operation(1.12,1.12) << endl;


	//引用
	int a = 1;
	//这个就只是值的复制，用另一个变量来接受
	int* pp = &a;
	int*&  b = pp;

	//一些操作会有临时变量，这时理解临时变量的权限就非常重要
	int* const& c = &a;

	const int x = 1;
	const int& ppp = x;

	const int* p = &x;

	//auto关键字
	auto q = 1;
	auto w = &q;
	auto* e = &q;

	//快速打印数组中的元素
	int arr[] = { 1,2,3,4,5,6 };
	for (auto a : arr)
	{
		cout << a << " ";
	}
	cout << endl;
	for (auto& a : arr)
	{
		a = a + 1;
	}
	cout << endl;
	for (auto a : arr)
	{
		cout << a << " ";
	}

	return 0;
}