/* 汉诺塔.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
函数重载
printf和cout
*/

#include <iostream>
#include <iomanip>
using namespace std;
static int i = 0;
void move(int n,  char A, char B, char C)   /*n个盘子从A通过B移动到C*/
{
	if (n == 1) { 
		i++;
	    cout << setw(0)<<"把一个盘子从" << A << "移动到" << C << setw(10)<<"i="<<setw(5)<<i<<endl;  }
	else{
		move(n - 1, A, C, B);
		i++;
		cout << setw(0) << "把一个盘子从" << A << "移动到" << C << setw(10) << "i=" << setw(5) << i << endl;
		move(n - 1, B, A, C);
	}
}

void move(int n, char A[], char B[], char C[])   /*n个盘子从A通过B移动到C*/
{
	if (n == 1) {
		i++;
		cout << setw(0) << "把一个盘子从" << A << "移动到" << C << setw(10) << "i=" << setw(5) << i << endl;
	}
	else {
		move(n - 1, A, C, B);
		i++;
		cout << setw(0) << "把一个盘子从" << A << "移动到" << C << setw(10) << "i=" << setw(5) << i << endl;
		move(n - 1, B, A, C);
	}
}

void move(int n, string A, string B, string C)   /*n个盘子从A通过B移动到C*/
{
	if (n == 1) {
		i++;
		cout << setw(0) << "把一个盘子从" << A << "移动到" << C << setw(10) << "i=" << setw(5) << i << endl;
	}
	else {
		move(n - 1, A, C, B);
		i++;
		cout << setw(0) << "把一个盘子从" << A << "移动到" << C << setw(10) << "i=" << setw(5) << i << endl;
		move(n - 1, B, A, C);
	}
}

int main()
{
	int n = 4;
	char A1 = 'A';
	char B1 = 'B';
	char C1 = 'C';

	char A2[] = "A塔";
	char B2[] = "B塔";
	char C2[] = "C塔";


	string A3 = "A塔";
	string B3 = "B塔";
	string C3 = "C塔";

	move(n, A1, B1, C1);
	cout << endl;
	move(n, A2, B2, C2);
	cout << endl;
	move(n, A3, B3, C3);

	int j = (int)(pow(2, n) - 1);

	if (i ==45 ) {
		cout << "Hello World!\n";
		printf("%s", "Hello World!\n");
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件