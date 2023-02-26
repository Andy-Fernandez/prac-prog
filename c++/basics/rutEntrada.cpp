#include <iostream>
using namespace std;

//entrada hasta fin de archivo
void entrada(){
  int x;
  goto isEndFile;

  processRead:
    cout << x << endl;
    goto isEndFile;

  isEndFile:
    if(cin >> x) goto processRead;
    else goto endRead;

  endRead:
    cout << "Fin de archivo" << endl;
}

int main(){
  entrada();
  return 0;
}