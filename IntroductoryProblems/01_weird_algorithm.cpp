#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int num;
  cin >> num;
  do {
    if (num == 1)
      break;
    printf("%lld ", num);
    if (num & 1)
      num = num * 3 + 1;
    else
      num /= 2;
  } while (1);
  printf("%lld", num);
  return 0;
}
