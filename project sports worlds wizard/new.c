#include <iostream>
using namespace std;

int main() {

 int T, n;
 cin >> T;
 for (int i = 1; i <= T; i++) {
  cin >> n;
  if (n > 10) {
   cout << n - 10 << " " << n - (n - 10) << "\n";
  }
  else {
   cout << 0 << " " << n << "\n";
  }
 }
 return 0;
}
