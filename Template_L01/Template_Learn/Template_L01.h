#pragma once
//����ѧϰģ��Ĺ����ļ����ʼ�

/*
c++ģ������壺
	�����з�ʽ��̵Ļ�����
	1.�����ظ�ʵ�ָ������Ͷ��ظ��������룬Ҳ���ӱ��ڹ���
	2.�������ǿ��Զ���ܶ������͵�vector����vector<int>��vector<float>��vector<string>.....
*/
using namespace std;


//ģ�������01
/*

//ģ�������01 star

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

//ģ�������01 end

*/


//����ģ��ķ��� 
/*
//����ģ��ķ��� star
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
//����ģ��ķ��� end

*/


//ģ�������02 ģ���ƥ��
/*
//ģ���ƥ�� star
class FTest				//���ڲ��Եı����õ���
{
public:
	int FWork()			//ֻ�и�������ģ������õĺ������ܳɹ�
	{
		
		cout <<"���óɹ�"<< endl;
		
		return 0;
	}
};



template<class T>
class FVector
{
public:


	void FHellow()
	{
		T Data;					//����һ��֮��Ҫ���õ�λ����
		Data.FWork();		//���ø�δ֪���ڵķ�����ֻ�е��õ����иú������ܳɹ�
	}


private:
	T* Data;

};

//ģ���ƥ�� end
*/