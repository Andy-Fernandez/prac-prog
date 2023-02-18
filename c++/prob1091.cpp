#include <iostream>
using namespace std;

// Description
// You will be given two natural numbers a and b. Your task is to check whether a is divisible by b or b is divisible by a.

// Entrance
// You will be given many test cases.
// The input consists of two natural numbers a and b not greater than 100
// .

// Exit
// There are three possible answers.

// If a is divisible by b print: "a is divisible by b".
// If b is divisible by a print: "b is divisible by a".
// If none of the cases is given, print: "-1".
// The values of a and b depend on the input.
// Print the answer on a single line.

// Example Entry
// 5 25
// 52 2
// 5 13

// Example Output
// 25 is divisible by 5
// 52 is divisible by 2
// -1

int main() {
  int a, b;

  //read each line
  loop:
    if (cin.eof()) goto end;
    goto main;

  main:
    cin >> a >> b;
    if (a % b == 0) goto a_div_b;
    if (b % a == 0) goto b_div_a;
    cout << "-1" << endl;
    goto loop;

  a_div_b:
    cout << a << " es divisible por " << b << endl;
    goto loop;

  b_div_a:
    cout << b << " es divisible por " << a << endl;
    goto loop;

  end:
    return 0;
}