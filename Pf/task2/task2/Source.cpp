#include<iostream>
using namespace std;
int main()
{
	int num,result;
	cout << " Display the integer ";
	cin >> num;
	for (int x = 0;x <= num;x++)
	{ 
		result = x * x;
		cout << " Square of " << x << " is " << result << endl;

	}
	return 0;
}