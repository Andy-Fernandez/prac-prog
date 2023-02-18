#include <iostream>
using namespace std;

// This problem cant use the for or whilr loop, only goto and then.

// Description
// It is asked to read a letter and if it is lower case, convert it to upper case and vice versa.

// To read a character from the keyboard, the following instruction is used:

// char c = (char) System.in.read();

// Entrance
// The input consists of one letter on one line.

// Exit
// The output consists of a letter according to the statement.

// Example Entry
// a
// Example Output
// A

int main() {
  char c;
  cin >> c;
  if (c >= 'a' && c <= 'z') goto lower;
  if (c >= 'A' && c <= 'Z') goto upper;
  goto end;

  lower:
    cout << (char) (c - 32) << endl;
    goto end;

  upper:
    cout << (char) (c + 32) << endl;
    goto end;

  end:
    return 0;
}
