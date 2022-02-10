// Deque.hpp
#ifndef __DEQUE__HPP__
#define __DEQUE__HPP__

#include <iostream>
using namespace std;

class Deque {
// implementasi deque array sirkuler
private:
  int* queue;
public:
  int first;
  int last;
  int neff;
  int maxel;
  Deque(); // default maxel = 10
  Deque(int maxel);
  Deque(const Deque& other);
  ~Deque();

  bool isFull() const;
  bool isEmpty() const;

  // menambahkan elemen ke queue
  friend void operator>(int e, Deque& q); // menambahkan e di depan deque jika q.isFull() == false
  friend void operator<(Deque& q, int e); // menambahkan e di belakang deque jika q.isFull() == false

  // mengambil elemen dari queue
  friend void operator>(Deque& q, int* e); // mengambil elemen paling belakang deque dan mengassign ke e, jika q.isEmpty() == false
  friend void operator<(int* e, Deque& q); // mengambil elemen paling depan deque dan mengassign ke e, jika q.isEmpty() == false

  // menggabungkan 2 deque
//   friend Deque& operator+(const Deque& qFront, const Deque& qBack);
  // membuat deque baru dengan queue = [qFront.queue, qBack.queue], neff = qFront.neff + qBack.neff, dan maxel = qFront.maxEl + qBack.maxEl

  friend ostream& operator<<(ostream& os, const Deque& q);
};

#endif

// end of Deque.hpp