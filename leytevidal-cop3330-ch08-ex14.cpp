#include <iostream>

using namespace std;

// This is an example of a program using constants and getting the same result every time. Normally a programmer wouldnt do this if they are looking to use different data sets as it would be tedious changing
// the code constantly. When using code that is not constant, the user can input any data that the code supports and output relevant results.

const int num1 = 2;
const int num2 = 3;

void sum(const int num1, const int num2)
{
  cout << num1 + num2 << endl;
}

void sub(const int num1, const int num2)
{
  cout << num1 - num2 << endl;
}

void multi(const int num1, const int num2)
{
  cout << num1 * num2 << endl;
}

void divi(const int num1, const int num2)
{
  cout << num1 / num2 <<endl;
}

int main() 
{
  sum(num1, num2);
  sub(num1, num2);
  multi(num1, num2);
  divi(num1, num2);
}