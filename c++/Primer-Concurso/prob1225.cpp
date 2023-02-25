#include <iostream>
using namespace std;

// This problem cant use the for or whilr loop, only goto and then.

// Description
// Write a program that reads three integers separated by a space and prints the maximum.

// Entrance
// The input consists of a line with three integers separated by a space.

// Exit
// The output consists of a line containing the maximum of the numbers
// Example Entry
// 22 44 -10
// Example Output
// 44

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b) goto a_bigger;
  if (b > c) goto b_bigger;
  cout << c << endl;
  goto end;

  a_bigger:
    if (a > c) goto a_bigger_c;
    cout << c << endl;
    goto end;

  b_bigger:
    if (b > c) goto b_bigger_c;
    cout << c << endl;
    goto end;

  a_bigger_c:
    cout << a << endl;
    goto end;

  b_bigger_c:
    cout << b << endl;
    goto end;

  end:
    return 0;
}