#include "Weed.hpp"

using namespace std;
Weed::Weed()
{
    this->many = 1;
}

Weed::Weed(int n)
{
    this->many = n;
}

Weed::Weed(const Weed &b)
{
    this->many = b.many;
}

Weed::~Weed()
{
    //
    this->many = 0;
}

void Weed::step()
{
    for (int i = 0; i < this->many; i++)
    {
        cout << "kresek...";
    }
    cout << endl;
}