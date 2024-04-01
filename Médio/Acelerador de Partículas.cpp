#include <iostream>

using namespace std;

struct node {
    int sensor;
    node* proximo;
    node(int x, node* y) : sensor(x), proximo(y) {};
};



int main() {
    node* first = new node(0, nullptr);
    node* ant = first;

    for (int i = 1; i < 8; i++) {
        node* x = new node(i, nullptr);
        ant->proximo = x;
        ant = x;
    }

    ant->proximo = first;


    int x;
    cin >> x;

    x = x-5;

    for (unsigned int i = 0; i < x; i++)
    {
        first = first->proximo;
    }

    cout << first->sensor;
    

    return 0;
}
