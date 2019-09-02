#include <iostream>
#include <string>
using namespace std;

float update_balance(int choice, float dollars, float& balance) 
{
	if (choice == 1) 
	{
		balance += dollars;
	}
	else if (choice == 2) 
	{
		balance -= dollars;
	}
	return(balance);
}

int main() 
{
	int choice;
	float balance = 10000;
	float dollars;
	
	cout << "Exit with 0" << endl;
	cout << "Your balance = " << balance << endl;
	do
	{
		cout << "Input command(1.withdrawl or 2. deposit) : ";
		cin >> choice;

		if (choice == 0) 
		{
			cout << "Exit Program..." << endl;
			return(0);
		}
		cout << "Input amount : ";
		cin >> dollars;
		cout << "Your balance : " << update_balance(choice, dollars, balance) << endl;
	} while (choice != 0);
	return(0);
}