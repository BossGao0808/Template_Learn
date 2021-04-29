#pragma once
#include<iostream>

//用于学习模板的工程文件及笔记

/*
c++模板的意义：
	是所有泛式编程的基础。
	1.避免重复实现各种类型而重复大量代码，也更加便于管理
	2.比如我们可以定义很多种类型的vector，如vector<int>、vector<float>、vector<string>.....
*/
using namespace std;


//模板类测试01
/*

//模板类测试01 star

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

//模板类测试01 end

*/


//函数模板的范例 
/*
//函数模板的范例 star
template<typename T>
T Max(T a, T b)
{
	return a < b ? b : a;
}

template <typename T>
inline T const& Max2(T const& a, T const& b)
{
	return a < b ? b : a;
}
//函数模板的范例 end

*/


//模板类测试02 模板的匹配
/*
//模板的匹配 star
class FTest				//用于测试的被调用的类
{
public:
	int FWork()			//只有该类中有模板类调用的函数才能成功
	{
		
		cout <<"调用成功"<< endl;
		
		return 0;
	}
};



template<class T>
class FVector
{
public:


	void FHellow()
	{
		T Data;					//声明一个之后要调用的位置类
		Data.FWork();		//调用该未知类内的方法，只有调用的类有该函数才能成功
	}


private:
	T* Data;

};

//模板的匹配 end
*/


//模板类测试03 模板类的继承
	/*
	//模板类的继承 Star
template<class T>
class FHello
{
public:
	void Hello()
	{
		cout << "Run FHello.Hello" << endl;//模板类的继承 函数的实现要放在.h文件内实现
	}
private:

};

class FTest
{
public:
	void Hello_00(){}

};

void FTest::Hello_00()
{
	cout << "Run FTest.Hello_00" << endl;
}


class FTest1:public FHello<FTest>
{
public:

	void Hello_01()
	{
		cout << "Run FTest1.Hello_01" << endl;
	};
	 
}

	//模板类的继承 End
	*/