#include<iostream>
#include <string>
#include"Template_L01.h"

using namespace std;


int main()
{

	//类模板测试01
	/*
	//类模板测试01 star

	int i = 10;
	float f = 3.14f;
	char cc = 'c';

	FVector<int> Test_int;				 //声明 一个int型的FVector类 Test_int
	FVector<float> Test_float;		 //声明 一个float型的FVector类 Test_float
	FVector<char> Test_char;		 //声明 一个char型的FVector类 Test_char


	Test_int.FSetValue(i);			//为数据赋值
	Test_int.FPrintValue();		//打印数据值

	Test_float.FSetValue(f);			//为数据赋值
	Test_float.FPrintValue();		//打印数据值

	Test_char.FSetValue(cc);			//为数据赋值
	Test_char.FPrintValue();		//打印数据值

	//类模板测试01 end

	*/


	//函数模板测试01
	/*
	//函数模板测试01 star
	int i = 49;
	int j = 58;
	cout << "Max(i,j):" << Max(i, j) << endl;

	float f1 = 3.14f;
	float f2 = 9.9f;
	cout << "Max(f1,f2):" << Max(f1, f2) << endl;

	string s1 = "Hello";
	string s2 = "World";
	cout << "Max(s1,s2):"<<Max(s1, s2) << endl;

	//函数模板测试01 end

	*/


	//模板类测试02 模板类的匹配
	/*
	//模板类的匹配 star
	int a = 10;
	int b = 5;

	FVector<FTest> PiPeiTest;//声明一个<FTest>类型的 FVector类实例 PiPeiTest
	PiPeiTest.FHellow();	

	//模板类的匹配 end
	*/




	cout << "请按任意键..." << endl;
	cin.get();
	return 0;
}