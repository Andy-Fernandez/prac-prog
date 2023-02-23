#include <iostream>
using namespace std;

int main(){
  //loop 0 to n
  int n, i;
  cin >> n;
  i = 0;
  loopMain:
    cout << i << endl;
    i++;
    if (i < n) goto loopMain;
    else goto final;

  final:
    return 0;
}

