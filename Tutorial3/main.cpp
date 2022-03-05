#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, int> hashmap;
    map<string, int>::iterator it;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        hashmap[temp]++;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        if (hashmap[temp])
        {
            hashmap[temp]--;
        }
    }
    for (it = hashmap.begin(); it != hashmap.end(); it++)
    {
        for (int i = 0; i < it->second; i++)
        {
            cout << it->first << endl;
        }
    }
}