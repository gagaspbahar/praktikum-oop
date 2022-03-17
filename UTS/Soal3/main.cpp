// Gagas Praharsa Bahar
// 13520016
// MaxHeap

#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

// New Random Birocrat Int
int rand50()
{
    return rand() % 50 + 1;
}

// Printing Function
template <class T>
void pqprint(priority_queue<T> pq)
{
    priority_queue<T> copy = pq;
    cout << "<";
    while (!copy.empty())
    {
        cout << copy.top();
        copy.pop();
        if (copy.size() != 0)
        {
            cout << ",";
        }
    }
    cout << ">" << endl;
}

// class Birocrat
// {
// private:
//     priority_queue<int> *buffer;

// public:
//     Birocrat()
//     {
//         for (int i = 0; i < 50; i++)
//         {
//             this->buffer.push(rand50());
//         }
//     }
//     void vote(){
//         this->buffer.pop();
//     }
//     void display(){
//         pqprint(this->buffer);
//     }
// };

int main()
{
    // 1. 50 Integer Random
    priority_queue<int> pq;
    for (int i = 0; i < 50; i++)
    {
        pq.push(rand50());
    }
    pqprint(pq);
    cout << "Current Leader: " << pq.top() << endl;
    // 2. Add new birocrat random
    pq.push(rand50());
    // 3. Vote the Leader out
    pq.pop();
    pqprint(pq);
    cout << "Current Leader: " << pq.top() << endl;
    // 4. Sort (Heap/PQ is automatically sorted)
}