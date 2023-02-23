#include <iostream>
#include <math.h>
using namespace std;

// create a program only using goto.
// description:
// read a number and print in how much at a stretch number in order ther are.
// Entrance:
// 4
// 143
// 210
// 124
// 1053

// Exit:
// 111413
// 121110
// 111214
// 11101513

int main(){
  int n, i, j, k, count, aux, len, variable;
  string final;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> k;
    len = to_string(k).length();
    count = 0;
    j = 1;
    aux = k/pow(10,len-j);
    final = "";
    for (j = 1; j <= len; j++) {
      if (aux == int(k/pow(10,len-j))) {
        count++;
      } else {
        final = final + to_string(count) + to_string(aux);
        count = 1;
      }
      variable = pow(10,len-j);
      aux = k/pow(10,len-j);
      k = k % variable;
    }
    final = final + to_string(count) + to_string(aux);
    cout << final << endl;
  }
  return 0;
}