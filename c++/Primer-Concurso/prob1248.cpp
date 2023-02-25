#include <iostream>
using namespace std;

// This problem cant use the for or whilr loop, only goto and then.

// Description
// The harmonic numbers are defined as:

// Hn=1/1+1/2+1/3+.....+1/n

// where Hn is the nth harmonic number.

// Entrance
// The input consists of a number "n".

// Exit
// Print the nth harmonic number, with 4 decimal places of precision.

// Example Entry
// 2
// Example Output
// 1.5000

int main() {
  int n;
  cin >> n;
  float sum = 0;
  int i = 1;
  main:
    if (i > n) goto end;
    sum += 1.0 / i;
    i++;
    goto main;
  end:
    cout.precision(4);
    cout << fixed << sum << endl;
    return 0;
}