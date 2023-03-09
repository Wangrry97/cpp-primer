#include "Sales_item.h"
#include <iostream>
using namespace std;

int main()
{
    Sales_item item, item_sum;
    cin >> item_sum;
    while (cin >> item)
    {
        item_sum += item;
    }
    cout << item_sum << endl;
    system("pause");
    return 0;
}