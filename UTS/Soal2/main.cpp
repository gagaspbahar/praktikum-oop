// Gagas Praharsa Bahar
// 13520016
// Queue

#include <iostream>
#include <string>
using namespace std;

#define CAPACITY 3

// Queue Exception Definition
class QueueException
{
public:
    virtual string what()
    {
        return "Undefined Queue Exception";
    }
};

class FullQueueException : public QueueException
{
public:
    FullQueueException()
    {
    }
    string what()
    {
        return "Full Queue Exception";
    }
};

class EmptyQueueException : public QueueException
{
public:
    EmptyQueueException()
    {
    }
    string what()
    {
        return "Empty Queue Exception";
    }
};

// Queue Class
template <class T>
class Queue
{
private:
    T *buffer;
    int neff;

public:
    Queue()
    {
        this->buffer = new T[CAPACITY];
        this->neff = 0;
    }
    ~Queue()
    {
        delete[] this->buffer;
    }
    void enqueue(T q)
    {
        if (this->neff == CAPACITY)
        {
            throw FullQueueException();
        }
        else
        {
            this->buffer[this->neff] = q;
            this->neff++;
        }
    }
    T dequeue()
    {
        T ans;
        if (this->neff == 0)
        {
            throw EmptyQueueException();
        }
        else
        {
            ans = this->buffer[0];
            for (int i = 0; i < this->neff - 1; i++)
            {
                this->buffer[i] = this->buffer[i + 1];
            }
            this->neff--;
        }
        return ans;
    }
    friend ostream &operator<<(ostream &os, Queue &q)
    {
        os << "[";
        if (q.neff == 0)
        {
        }
        else
        {
            for (int i = 0; i < q.neff - 1; i++)
            {
                os << q.buffer[i];
                os << ",";
            }
            os << q.buffer[q.neff - 1];
        }
        os << "]";
        os << "\n";
        return os;
    }
};

// Mobil Class
class Mobil
{
private:
    string type;
    int year;

public:
    Mobil()
    {
        this->type = "none";
        this->year = 0;
    }
    Mobil(string type, int year)
    {
        this->type = type;
        this->year = year;
    }
    friend ostream &operator<<(ostream &os, Mobil &m)
    {
        os << m.type;
        os << ":";
        os << m.year;
        return os;
    }
};

int main()
{
    cout << "Integer Queue" << endl;
    Queue<int> qint;
    try
    {
        qint.enqueue(2);
        qint.enqueue(3);
        qint.enqueue(4);
        cout << qint.dequeue() << endl;
        qint.enqueue(5);
        qint.enqueue(6);
        // EXCEPTION
    }
    catch (EmptyQueueException q)
    {
        cout << q.what() << endl;
    }
    catch (FullQueueException q)
    {
        cout << q.what() << endl;
    }

    cout << qint << endl;

    cout << "Float Queue" << endl;
    Queue<float> qf;
    try
    {
        qf.enqueue(1.3);
        qf.enqueue(2.3);
        qf.enqueue(2.4);
        cout << qf << endl;
        cout << qf.dequeue() << endl;
        cout << qf.dequeue() << endl;
        cout << qf.dequeue() << endl;
        cout << qf.dequeue() << endl;
        // EXCEPTION: EMPTY QUEUE
    }
    catch (EmptyQueueException q)
    {
        cout << q.what() << endl;
    }
    catch (FullQueueException q)
    {
        cout << q.what() << endl;
    }

    cout << qf << endl;

    cout << "Mobil Queue" << endl;
    Queue<Mobil> qm;
    try
    {
        qm.enqueue(Mobil("test", 2000));
        qm.enqueue(Mobil("test2", 2002));
    }
    catch (FullQueueException q)
    {
        cout << q.what() << endl;
    }
    catch (EmptyQueueException q)
    {
        cout << q.what() << endl;
    }
    cout << qm << endl;
}
