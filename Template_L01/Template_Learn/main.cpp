#include<iostream>
#include"Template_L01.h"

using namespace std;
int main()
{

	int i = 10;
	float f = 3.14f;
	char cc[10] = "char";


	FVector<int> Test_int;
	Test_int.FSetValue(i);
	Test_int.FPrintValue();


	cout << "Çë°´ÈÎÒâ¼ü..." << endl;
	cin.get();
	return 0;
}