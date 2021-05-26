#include <iostream>
using namespace std;
int main()
{

	int choice, choice2, n, i;
	float fr, fp;
	cout << "\n########### DAIRY CALCULATOR ###########";
	cout << "\n\n Fat rate is 6 and Bonus is 4 per Kg\n";
	while (2)
	{
		float sum = 0;
		cout << "\nEnter the choice:\n";
		cout << "1.Update Fat rate and Bonus\n";
		cout << "2.Skip and proceed to Calculations\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "Enter Fat rate and Bonus:";
			cin >> fr >> fp;
			cout << "Fat rate and Bonus updated successfully\n";
			cout << "Press 1 for proceed to Calculations\nPress 2 for Exit\n";
			cin >> choice2;
			switch (choice2)
			{
			case 1:
			{
				cout << "Enter number of innings\n";
				cin >> n;
				float wt[n], fat[n];
				cout << "Enter Milk weight and Fat for " << n << " days\n";
				for (i = 0; i < n; i++)
				{
					cin >> wt[i] >> fat[i];
					sum += (fat[i] * fr + fp) * wt[i];
				}
				cout << "Total amount for " << n << " days is Rs " << sum << "/-\n\n\n";
				break;
			}
			case 2:
			{
				break;
			}
			}
			break;
		}
		case 2:
		{
			cout << "Enter number of innings\n";
			cin >> n;
			float wt[n], fat[n];
			cout << "Enter Milk weight and Fat for " << n << " days\n";
			for (i = 0; i < n; i++)
			{
				cin >> wt[i] >> fat[i];
				sum += (fat[i] * 6 + 4) * wt[i];
			}
			cout << "Total amount for " << n << " days is Rs " << sum << "/-\n\n\n";
			break;
		}
		default:
		{
			cout << "Invalid choice!";
			break;
		}
		}
	}
}
