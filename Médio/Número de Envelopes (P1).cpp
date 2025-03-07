#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <map>


using namespace std;

int main()
{   
    map<int,int> selos;
    int selosN,selosTipos;
    
    cin >> selosN >> selosTipos;

    for (size_t i = 0; i < selosTipos; i++)
    {
        selos.insert({i+1,0});
    }


    for (size_t i = 0; i < selosN; i++)
    {
        int p;
        cin >> p;
        selos[p]++;
    }

    int max = 999999999;
    for (auto i : selos) {
        if (i.second < max)
            max = i.second;
    }
    
    cout << max;
    
}