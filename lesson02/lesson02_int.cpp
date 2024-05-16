#include<iostream>
using namespace std;
#include<string>
int main(void)
{
	string str1 = "yangkuo";
	cout << str1 << endl;
	int* pt = new int;
	*pt = 20;
	cout <<"address ：" << pt << "value: " << *pt << endl;
	cout<<"这是第二节课程"<<endl;
	delete pt;
	return 0;

}
