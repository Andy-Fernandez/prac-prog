#include <iostream>
using namespace std;

// This problem cant use the for or whilr loop, only goto and then.

// Description
// The sum3 is the sum of the numbers less than a given number (starting from 1), but that are multiples of 3.

// For example, if the number is 10, the sum3 will be 3+6+9=18 since 3,6, and 9 are less than 10 and are also multiples of 3.

// Entrance
// A number n will be entered via the keyboard (1<=n<=10000).

// Exit
// The sum3 should be printed on one line.

int main() {
  int sum3 = 0;
  int i = 1;
  int n, x, result;
  cin >> n;

  // Faster:
  // way2:
  //   n--;
  //   x = n / 3;
  //   result = x * (3 + (n-n%3)) / 2;
  //   cout << result << endl;

  main:
    if (n > 3) goto loop;
    goto end;

  loop:
    sum3 += 3*i;
    i++;
    n -= 3;
    goto main;

  end:
    cout << sum3 << endl;
    return 0;
}