#pragma once
//����ѧϰģ��Ĺ����ļ����ʼ�

/*
c++ģ������壺
	�����з�ʽ��̵Ļ�����
	1.�����ظ�ʵ�ָ������Ͷ��ظ��������룬Ҳ���ӱ��ڹ���
	2.�������ǿ��Զ���ܶ������͵�vector����vector<int>��vector<float>��vector<string>.....
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