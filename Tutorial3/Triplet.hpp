#ifndef _TRIPLET_HPP_
#define _TRIPLET_HPP_

#include <iostream>

template <class T1, class T2, class T3>
class Triplet {
private:
    T1 first;
    T2 second;
    T3 third;
public:
    Triplet() {}
    Triplet(T1 first, T2 second, T3 third) {
        this->first = first;
        this->second = second;
        this->third = third;
    }
    Triplet(const Triplet<T1,T2,T3>& tr) {
        this->first = first;
        this->second = second;
        this->third = third;
    }

    T1 getFirst() {
        return this->first;
    }
    T2 getSecond() {
        return this->second;
    }
    T3 getThird() {
        return this->third;
    }

    void setFirst(T1 first) {
        this->first = first;
    }
    void setSecond(T2 second) {
        this->second = second;
    }
    void setThird(T3 third) {
        this->third = third;
    }

    bool operator==(const Triplet<T1,T2,T3>& t) {
        return (this->first == t.first) && (this->second == t.second) && (this->third == t.third);
    }

    bool operator!=(const Triplet<T1,T2,T3>& t) {
        return (this->first != t.first) || (this->second != t.second) || (this->third != t.third);
    }
};

#endif