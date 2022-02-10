#include <iostream>
#include "Deque.hpp"
using namespace std;

ostream& operator<<(ostream& os, const Deque& q) {
  Deque q2(q);
  os << q.neff << endl;
  while (!q2.isEmpty()) {
    int tmp;
    &tmp < q2;
    os << tmp << " ";
  }
  os << endl;
  return os;
}

int main() {
  // push dari belakang
  Deque q; // first = 0, last = 0, neff = 0
  q < 1; // first = 0, last = 1, neff = 1
  cout << q.first << endl;
  cout << q.last << endl;
  cout << q.neff << endl;
  q < 2; // first = 0, last = 2, neff = 2
  q < 3; // first = 0, last = 3, neff = 3
  int tmp;
//   &tmp < q;
//   cout << "Temp: " << tmp << endl;
  cout << q << endl;
  // output:
  // 3
  // 1 2 3
  // TODO push dari depan
  // TODO pop dari depan
  // TODO pop dari belakang
  return 0;
}