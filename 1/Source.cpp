#include <iostream>
using namespace std;
int main()
{
	int n;
	while (true)
	{
		cout << "Enter the coefficent n";
		if (n > 0) break;
		cout << "Error" << endl;
	}
	double sum = 0, temp;
	for (int i = 1; i <= n; i++)
	{
		temp = 1.0 / i;
		sum += temp;
	}
	cout << "Sum :  ";
	cout << sum << endl;
	system("pause");
	return 0;
}