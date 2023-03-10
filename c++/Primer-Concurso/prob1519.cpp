#include <iostream>
using namespace std;

// This problem cant use the for or whilr loop, only goto and then.

// Description
// Dennis got bored with studying and began to play with his collection of coins, arranging them as follows:

// Size 1: 1 coin
// Size 2: 6 coins
// Size 3: 15 coins
// Size 4: 28 coins

// Now he wanted to rest from the series he was watching, but it seems that fate does not want it that way, so even playing with his coins he finds that there could be a series here.

// Dennis will group the coins he needs to make these figures, now your task is to tell him how many coins are in each group.

// Entrance
// The first line is the value of T, which are the cases to check.

// For each test case, the input is an integer n
// (0≤n≤100
// ) that represents the number of shapes Dennis wants to build.

// Exit
// The output consists of n
// numbers separated by a space that are how many coins he needs to make the figures of the sizes from 1
// up to n
// Example Input
// 2
// 5
// 3
// Example Output
// 1 6 15 28 45
// 1 6 15

int main() {
  int n, x;
  string s = "";
  int v[101];
  int i = 1;
  cin >> n;

  //Creating all the numbers from 1 to 100
  creating:
    if (i > 100) goto show;
    v[i] = 2*(i*i) - i;
    i++;
    goto creating;

  show:
    cin >> x;
    i = 1;
    s = "";
    goto loop;

  loop:
    // if (i == 1) {
    //   s += "1 ";
    //   i++;
    //   goto loop;
    // }
    // cout << "To string: " <<to_string(v[i]) << endl;
    s += to_string(v[i]);
    i++;
    if (i <= x) s += " ";
    if (i <= x) goto loop;
    else goto show2;

  show2:
    cout << s << endl;
    n--;
    if (n == 0) goto end;
    goto show;

  end:
    return 0;
}