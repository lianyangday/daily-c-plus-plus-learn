#pragma once

#pragma once
#include<stdlib.h>
#include<iostream>


typedef int datatype;

//类——栈
class stack
{
public:
	//栈的初始化
	stack();
	//栈的插入
	void push(datatype x);
	//栈的删除
	void pop();
	//栈顶元素
	datatype top();
	//栈的元素数量
	int num();
	//栈的销毁
	~stack();

private:
	datatype* arr;
	int size;
	int capacity;
};

