#include<iostream>
#include<unordered_set>
#include<set>
#include<map>
#include<unordered_map>
#include<vector>
#include<string>

using namespace std;

int main()
{
    map<string,int> m;
    m["banana"] = 3;
    m["apple"] = 2;
    m["orange"] = 4;
    m["Ringo"] = 1;

    for(auto o : m)
    {
        cout << o.first << " co " << o.second << endl;
    }

    map<string,int>::iterator it = m.end() - 1s;
    --it;
    m.erase(it);

    cout << endl;

    for(auto o : m)
    {
        cout << o.first << " co " << o.second << endl;
    }

    return 0;
}
