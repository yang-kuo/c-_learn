#include<iostream>
using namespace std;

int main(void)
{
	
	int* pt = new int;
	*pt = 20;
	cout <<"address ：" << pt << "value: " << *pt << endl;
	cout<<"这是第二节课程"<<endl;
	delete pt;
	return 0;

}
