#include <iostream>
using namespace std;

int main(){
  //loop 0 to n
  int n, x, i, j;
  cin >> n;
  i = 0;
  loopMain:
    i++;
    j = 0;
    cin >> x;
    if (i < n) goto loopSecond;
    else goto final;

  loopSecond:
    cout << j << endl;
    j++;
    if (j < x) goto loopSecond;
    else goto loopMain;

  final:
    return 0;
}