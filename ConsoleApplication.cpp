# include <iostream>
using namespace std;
int my_sum3(int a, int b, int c);
int main()
{
	cout << "Hello world" << endl;
	cout << "Let's try new concepts" << endl;
	cout << "Learning git is fun!" << endl;
		cout << my_sum3(2, 4, 6);
}
int my_sum3(int a, int b, int c)
{
	return a + b + c;
}