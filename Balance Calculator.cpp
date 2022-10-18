//David Archer
//Balance Calculator

#include<iostream>
#include<iomanip>
#include <string>


using namespace std;

int const dollarsPerCents = 100;
void computeChange(int dollars, int dollarsPerCents, int cents, int& d, int& c);

int main()
{
	int dollars, dollarsPerCents, c, d;

	//User input; item price
	cout << "Enter dollars before cents: ";
	cin >> dollars >> dollarsPerCents;
	cout << "How much will you be paying? ";
	cin >> d >> c;

	//Function
	computeChange(dollars, dollarsPerCents, d, c);
	cin.get(); cin.get();

	system("PAUSE");
	return 0;
}

void computeChange(int dollars, int dollarsPerCents, int cents, int& d, int& c)
{
	//From dollars to cents
	int num1Cents = dollars * dollarsPerCents;
	//Total
	int totalPrice = num1Cents + cents;
	//Dollars paid to cents
	int num2Cents = d * dollarsPerCents;
	//
	int totalPaid = num2Cents + c;
	//Price check verification
	if(totalPaid < totalPrice)
	{
		cout << "Insufficient amount paid";

	}
	else
	{
		int difference = totalPaid - totalPrice;

		//Condition verification
		if(difference < 100)
		{
			cout << "Your change is: " << difference;
		}
		else if(difference > dollarsPerCents)
		{
			int dollar, cent;
			dollar = difference / 100;
			cent = difference - (dollar * dollarsPerCents);

			//Display change
			cout << "Your change is: " << difference;

		}

	}


}