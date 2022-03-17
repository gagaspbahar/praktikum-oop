#ifndef QUEUE_H
#define QUEUE_H
#define CAPACITY 10

#include <iostream>
using namespace std;
template <class T>
class Queue
{
private:
    T *elements;
    int nElements;
public:
    Queue(){
        this->elements = new T[CAPACITY];
        this->nElements = 0;
    }
    ~Queue(){
        delete[] this->elements;
    }
    void enqueue(const T q){
        if(this->size == CAPACITY){
            throw "Queue is full";
        }
        else{
            this->elements[this->nElements] = q;
            this->nElements++;
        }
    }
    T dequeue(){
        if(this->nElements == 0){
            throw "Queue is empty";
        }
        else{
            T ans = this->elements[0];
            for(int i = 0; i < this->nElements; i++){
                this->elements[i] = this->elements[i+1];
            }
            this->nElements--;
            return ans;
        }
    }
    void print(){
        for(int i = 0; i < this->nElements; i++){
            cout << this->data[i] << " ";
        }
        cout << endl;
    }
};
// Default constructor
// Destructor
// Method enqueue
// Method dequeue
// Method print
template <class T>
class PriorityQueue : public Queue<T>
{
private:
    int *priorities;

public:
    PriorityQueue();
    ~PriorityQueue();
    void enqueue(const T &, int);
};

// Default constructor
// Destructor
// Method enqueue
// Method dequeue, override if needed
// Method print, override if needed

#endif