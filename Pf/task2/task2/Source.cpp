#include<iostream>
using namespace std;
int main()
{
	int num,result;
	
	// This loop will validate user to enter positive num
	do{
	cout << " Enter integer => ";
	cin >> num;
	}while(num<0);
	
	// Iteration Loop till User Entered Num
	for (int x = 0;x <= num;x++)
	{ 
		// Printing Square of a number
		result = x * x;
		cout << " Square of " << x << " is " << result << endl;

	}
	return 0;
}
