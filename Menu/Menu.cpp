#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

	char choice;
	do
	{

		cout << "Menu of Options\n";
		cout << "===============\n\n";
		cout << "1. Say Good Morning in Spanish\n";
		cout << "2. Say Good Morning in Portugues\n";
		cout << "3. Say Good Morning in Polish\n";
		cout << "4. Say Good Morning in Italian\n\n";
		cout << "0. To Exit\n\n";
		cout << "Enter your Choice ==>";
		cin >> choice;
		switch (choice)
		{
			case 'a':
			cout << "\nBuenos Dias!!!\n\n\n";
			system("pause");
			system("cls");

			break;

		case 'b':
			cout << "\nBom Dia!!!\n";
			system("pause");
			system("cls");
			break;

		case 'c':
			cout << "\n Dzien Dobry!!!\n\n";
			system("pause");
			system("cls");
			break;

		case 'd':
			cout << "\nBon Giorno!!!\n\n";
			system("pause");
			system("cls");
			break;

		case 'x':
			cout << "\nThanks for using this App - Goodbye!!!\n\n";
			system("pause");
			system("cls");
			break;

		default:
			cout << "\nWrong Entry Try Again!!!\n\n";
			system("pause");
			system("cls");

		}
	} while (choice != 'x');
}
