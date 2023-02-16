#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int n, temp, sum = 0;
  vector<long long int> v;
  cin >> n;
  for (int i = 0; i < n - 1; i++) {
    cin >> temp;
    sum += temp;
  }
  long long int cal_sum = n * (n + 1) / 2;
  printf("%lld", cal_sum - sum);
  return 0;
}
