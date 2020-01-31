#include <iostream>
using namespace std;

int sumDigitSquare(int n)
{
	int steps = 0;
	while (1) {
		if (n == 1)
			return ++steps;
		int sum = 0;
		while (n) {
			int digit = n % 10;
			sum += digit * digit;
			n = n / 10;
		}
		steps++;
		n = sum;
		if (sum == 4)
			break;
	}
	return 0;
}

int main()
{
	int counter, min, max, stepCount;
	cout << "Enter range: ";
	cin >> min >> max;

	for (counter = min; counter <= max; counter++) {
		stepCount = sumDigitSquare(counter);
		if (stepCount != 0) {
			cout << counter << " " << stepCount << endl;
		}
	}

	return 0;
}