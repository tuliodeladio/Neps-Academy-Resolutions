#include <iostream>

using namespace std;

int main()
{
    int id, if1,if2,if3;
    cin >> id >> if1 >> if2;

    if3 = id - if1 - if2;

    if (if1 >= if2 && if1 >= if3)
        cout << if1;
    if (if2 > if1 && if2 > if3)
        cout << if2;
    if (if3 > if1 && if3 > if2)
        cout << if3;
    return 0;

}
