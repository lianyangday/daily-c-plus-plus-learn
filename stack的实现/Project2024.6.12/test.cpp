#include<iostream>
using namespace std;

#include<iostream>
#include"stack.h"

int main()
{
	stack a1;
	//²åÈëÊı¾İ
	a1.push(1);
	a1.push(2);
	a1.push(3);
	a1.push(4);
	a1.push(5);
	a1.push(6);
	a1.push(7);
	cout << a1.num() << endl;
	cout << a1.top() << endl;
	a1.pop();
	cout << a1.num() << endl;
	cout << a1.top() << endl;

	return 0;
}


