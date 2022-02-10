#include "Deque.hpp"
#include <iostream>
using namespace std;

Deque::Deque() : neff(0), maxel(10), first(0), last(0)
{
    this->queue = new int[this->maxel + 1];
}

Deque::Deque(int maxel) : neff(0), maxel(maxel), first(0), last(0)
{
    this->queue = new int[this->maxel + 1];
}

Deque::Deque(const Deque &other) : neff(other.neff), maxel(other.maxel), first(other.first), last(other.last)
{
    this->queue = new int[other.maxel + 1];
    for (int i = 0; i < other.maxel; i++)
    {
        this->queue[i] = other.queue[i];
    }
}

Deque::~Deque()
{
    delete[] this->queue;
}

bool Deque::isFull() const
{
    return this->neff == this->maxel;
}

bool Deque::isEmpty() const
{
    return this->neff == 0;
}

void operator>(int e, Deque &q)
{
    // menambahkan e di depan deque jika q.isFull() == false
    // F.S. neff bertambah 1, first bergeser ke kiri (sirkuler), last tetap
    if (!q.isFull())
    {
        if (q.neff == 0)
        {
            q.first = 0;
        }
        else if (q.first == 0)
        {
            q.first = q.maxel - 1;
        }
        else
        {
            q.first--;
        }
        q.queue[q.first] = e;
        q.neff++;
    }
}

void operator<(Deque &q, int e)
{
    // menambahkan e di belakang deque jika q.isFull() == false
    // F.S. neff bertambah 1, last bergeser ke kanan (sirkuler), first tetap
    if (!q.isFull())
    {
        if (q.last == q.maxel - 1 || q.neff == 0)
        {
            q.last = 0;
            q.queue[0] = e;
        }
        else
        {
            q.last++;
        }
        q.queue[q.last] = e;
        q.neff++;
    }
}

void operator>(Deque &q, int *e)
{
    // mengambil elemen paling belakang deque dan mengassign ke e, jika q.isEmpty() == false
    // mengassign e dengan 0 jika q.isEmpty() == true
    // F.S. neff berkurang 1, last bergeser ke kiri (sirkuler), first tetap
    if (!q.isEmpty())
    {
        *e = q.queue[q.last];
        if (q.last == 0)
        {
            q.last = q.maxel - 1;
        }
        else
        {
            q.last--;
        }
        q.neff--;
    }
    else
    {
        *e = 0;
    }
}

void operator<(int *e, Deque &q)
{
    // mengambil elemen paling depan deque dan mengassign ke e, jika q.isEmpty() == false
    // mengassign e dengan 0 jika q.isEmpty() == true
    // F.S. neff berkurang 1, first bergeser ke kanan (sirkuler), last tetap
    if (!q.isEmpty())
    {
        *e = q.queue[q.first];
        // if(q.first == 0){
        //     *e = q.queue[1];
        // }
        if (q.first == q.maxel - 1)
        {
            q.first = 0;
        }
        else
        {
            q.first++;
        }
        q.neff--;
    }
    else
    {
        *e = 0;
    }
}

// Deque& operator+(const Deque& qFront, const Deque& qBack){
//     // membuat deque baru dengan queue = [qFront.queue, qBack.queue], neff = qFront.neff + qBack.neff, dan maxel = qFront.maxEl + qBack.maxEl
//     Deque ans = Deque(qFront.maxel + qBack.maxel);
//     int i = 0;
//     while(i != qFront.neff){
//         ans < qFront.queue[i];
//         i++;
//         ans.neff++;
//     }
//     while(i != qFront.neff+qBack.neff){
//         ans < qBack.queue[i-qFront.neff];
//         i++;
//         ans.neff++;
//     }
//     return ans;
// }