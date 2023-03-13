#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vInt;
    cin >> vInt;
    for (auto i = vInt.begin(); i != vInt.end() && !i->empty(); ++i)
        vInt.push_back(cin);
    return 0;
}