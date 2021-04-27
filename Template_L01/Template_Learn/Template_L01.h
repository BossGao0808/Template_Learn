#pragma once
//用于学习模板的工程文件及笔记

/*
c++模板的意义：
	是所有泛式编程的基础。
	1.避免重复实现各种类型而重复大量代码，也更加便于管理
	2.比如我们可以定义很多种类型的vector，如vector<int>、vector<float>、vector<string>.....
*/
using namespace std;

template<class T>
class FVector
{
public:
	
	void FSetValue(T &Value)
	{
		Data = &Value;
	}
	void FPrintValue()
	{
		cout << *Data << endl;
	}
private:
	T* Data;

};