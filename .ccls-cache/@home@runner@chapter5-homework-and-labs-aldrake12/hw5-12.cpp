//hw5-12.cpp - displays the total owed
//Revised by Andrew Drake on 07/18/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//define all variable
	double itemOne = 0.00;
	double itemTwo = 0.00;
	double total = 0.00;
	const double discountRate = 0.5;

	//enter cost of both items
	cout << "Enter cost of item 1: ";
	cin >> itemOne;
	cout << "Enter cost of item 2: ";
	cin >> itemTwo;

	//swap item one and two if item two is more expensive
	if (itemTwo > itemOne)
	{
		double temp = 0.00;
		temp = itemOne;
		itemOne = itemTwo;
		itemTwo = temp;
	} //endif

	//calculate total of both items with discount on itemTwo
	total = itemOne + (itemTwo * discountRate);

	//display total
	cout << fixed << setprecision(2);
	cout << "Total: " << total << endl;

	return 0;
}	//end of main function