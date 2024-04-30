// my first cpp program
#include <iostream>
// using namespace std;
#include <cmath>
int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;  // 这样加命名空间的方式比较好,这样后面使用cout、cin、endl就不需要加std::cout
	int num1 = 3;  // 声明一个变量名为num1,并且初始化为3
	int num2 = 5; // define a number
	int num3 = 0;
	cout << "please input a number: ";
	cin >> num3;  // 将键盘输入传入到num3
	cout << "you input number is: "<< num3 << endl;
	std::cout << "num1 + num2 = " << num1 + num2 << "!" << std::endl;
	std::cout << "this is the first cpp program!" << std::endl;
 	// 函数简单使用
	int x;
	x = sqrt(64);  // 返回某个数的开根号
	cout << x <<endl;

	return 0;
}
