#include <iostream>
#include <conio.h>
#include <iomanip>


using namespace std;


int main ()

{
	int x[10];
	int y;
	int max;
	int min;
	double sum = 0;

	for (y = 0; y < 10; y++)
{
	cout << "Enter numbers for the array: ";
	cin >> x[y];
 }

	max = x[0];
	for (y = 0; y < 10; y++)
 {
	if (max < x[y])
	max = x[y];
 }

	min = x[0];
	for (y = 0; y < 10; y++)
 {
	if (min > x[y])
	min = x[y];
 }

	for (y = 0; y < 10; y++)
 {
	sum = sum + x[y];
 }

 cout << "Largest element: " << max << endl;
 cout << "Smallest element: " << min << endl;
 cout << "Total Sum: " << sum << endl;
 cout << "Average: " << sum/10 << endl;

 
	getch ();
	return 0;
}