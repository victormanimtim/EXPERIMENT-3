#include <iostream>
#include <conio.h>
#include <iomanip>


using namespace std;

int main()

{

int x;
int y; 
int z;

char input[10];

	cout << "Enter Array Elements: ";
	cin >> input;


for (x = 0; input[x] != '\0'; x++)
{
	z = x;
}
	y = x - 1;
	x = 0;
while (input[x] > input[y])
{
	char temp = input[x];
	input[x] = input[y];
	input[y] = temp;
	x++;
	y--;
}
	cout << "Reversed Elements: ";
	for (x = 0; x <= z; x++)
{
	cout << input[x];
}
	cout << " " << endl;
	cout << "Array Size: " << z + 1;
	getch();
return 0;
}