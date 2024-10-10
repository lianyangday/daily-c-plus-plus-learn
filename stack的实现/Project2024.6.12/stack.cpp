#include"stack.h"


//栈的初始化
stack::stack()
{
	//初始化
	arr = nullptr;
	size = 0;
	capacity = 0;
}

//栈的插入
void stack::push(datatype x)
{
	//判断空间是否够
	if (size == capacity)
	{
		int newcapity = capacity == 0 ? 4 : 2 * capacity;
		datatype* newarr = (datatype*)realloc(arr, sizeof(datatype) * newcapity);
		if (newarr == nullptr)
		{
			perror("stack::push::malloc");
			exit(1);
		}
		arr = newarr;
		capacity = newcapity;

	}

	//空间足够直接插入
	arr[size] = x;
	size++;
}

//栈的删除
void stack::pop()
{
	size--;
}

//栈顶元素
datatype stack::top()
{
	return arr[size - 1];
}

//栈的元素数量
int stack::num()
{
	return size;
}

//栈的销毁
stack::~stack()
{
	free(arr);
	arr = nullptr;
	size = 0;
	capacity = 0;
}

