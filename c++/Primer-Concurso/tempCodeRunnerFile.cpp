/ up to n
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
    s = s + to_string(v[i]) + " ";
    i++;
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