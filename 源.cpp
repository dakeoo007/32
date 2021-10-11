////判断闰年
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int year;
//	cin >> year;
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		cout << year << "true" << endl;
//	}
//	else
//	{
//		cout << year << "false" << endl;
//	}
//	return 0;
//}

////求N的阶乘
//#include<iostream>
//using namespace std;
//
//int main(int argc, const char*argv[])
//{
//	int i, n, res;
//	while (cin >> n)
//	{
//		res = 1;
//		i = 1;
//		while (i <= n)
//		{
//			res *= i;
//			i++;
//		}
//		cout << n << "的阶乘为：" << res << endl;
//	}
//	return 0;
//}

////判断素数
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			cout << n << "不是素数" << endl;
//			return 1;
//		}
//	}
//	cout << n << "是素数" << endl;
//	return 0;
//}

////求斐波那契数列第n项
//#include<iostream>
//using namespace std;
//
//int fib(int n);
//
//int main()
//{
//	int a;
//	while (cin >> a)
//	{
//		cout << "结果是" << fib(a) << endl;
//	}
//	return 0;
//}
//
//int fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return (fib(n - 1) + fib(n - 2));
//}


////求整形数字中有多少个1
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int input, i = 0;
//	cin >> input;
//	while (input>0)
//	{
//		if (input % 2 != 0)
//		{
//			i++;
//		}
//		input = input / 2;
//	}
//	cout << i;
//	return 0;
//}


////三个全缺省参数的函数
//#include<iostream>
//using namespace std;
//
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a =" << a << endl;
//	cout << "b =" << b << endl;
//	cout << "c =" << c << endl;
//}
//
//int main()
//{
//	cout << "不传参数" << endl;
//	Func1();
//	cout << "传一个参数" << endl;
//	Func1(1);
//	cout << "传两个参数" << endl;
//	Func1(1,2);
//	cout << "传三个参数" << endl;
//	Func1(1, 2, 3);
//	return 0;
//}


//重载函数
int Add(int left, int right)
{
	return left + right;
}

double Add(double left, double right)
{
	return left + right;
}

long Add(long left, long right)
{
	return left + right;
}

int main()
{
	Add(10, 20);
	Add(10.0, 20.0);
	Add(10L, 20L);
	return 0;
}