#include <iostream>
using namespace std;
int main()
{

	double sum = 0, temp;
	int n;
	{while (true)
		cout << "Enter the coefficent n"
		if (n > 0) break
		else cout << "Error" << endl;
	}
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