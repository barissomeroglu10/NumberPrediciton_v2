/*
In this code, we make a random number between 1000 and 9999. Then we write its ones and thousands digit on screen.
After this user predicts tens and hundreds digits. İf the predict is true code writes a message on screen.
Also same for wrong predict.

Developer = Barış Someroğlu
Date = 29.04.2024 - 05:00 pm
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int RandomNumber, PredictNumber, FirstDigit, TensDigit, HundredsDigit, ThousandsDigit, predictHundredsDigit, predictTensDigit;

	// Random number generator
	srand(time(NULL));

	// Range for number
	RandomNumber = 1000 + rand() % 9000;
	
	FirstDigit = RandomNumber % 10;
	ThousandsDigit = RandomNumber / 1000;

	cout << "Random Number = " << ThousandsDigit << "__" << FirstDigit << endl;

	TensDigit = RandomNumber % 100;
	TensDigit = RandomNumber / 10;

	HundredsDigit = RandomNumber % 1000;
	HundredsDigit = RandomNumber / 100;

	cout << "\nPlease predict number for hundreds digit = ";
	cin >> predictHundredsDigit;

	cout << "Please predict number for tens digit = ";
	cin >> predictTensDigit;

	if (predictHundredsDigit == HundredsDigit && predictTensDigit == TensDigit)
		cout << "\nYou find the number!" << endl;

	else
		cout << "\nYou didn't find the number!" << endl;

	cout << "Random Number is = " << RandomNumber << endl;

	return 0;
}