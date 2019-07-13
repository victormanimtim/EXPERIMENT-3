#include <iostream>
#include <conio.h>
#include <iomanip>


using namespace std;


int main()
{
 int x;

 int A[7];
 for (int x = 0; x < 7; x++)
{
 cout << "Province A, Day " << x + 1 << ": ";
 cin >> A[x];
 }

 int B[7];
 for (int x = 0; x < 7; x++)
{
 cout << "Province B, Day " << x + 1 << ": ";
 cin >> B[x];
 }

 int C[7];
 for (int x = 0; x < 7; x++)
{
 cout << "Province C, Day " << x + 1 << ": ";
 cin >> C[x];
 }

 cout << " " << endl;

 cout << "Displaying Values: " << endl;
 for (int i = 0; i < 7; x++)
{
 cout << "Province A, Day " << x + 1 << " = " << A[x] << endl;
 }

 for (int x = 0; x < 7; x++)
{
 cout << "Province B, Day " << x + 1 << " = " << B[x] << endl;
 }

 for (int i = 0; i < 7; i++)
{
 cout << "Province C, Day " << x + 1 << " = " << C[x] << endl;
 }

 _getch();
 return 0;
}
