#include <iostream>
#include <unordered_map>


using namespace std;

int main()
{
    unordered_map<char,int> map;

    string a;
    getline(cin,a);

    for(char i : a) {
        if (i != 'k' and i != 'w' and i != 'y' and i != ' ' and i != ':' and i != ',')
            map[i]++;
    }
    
    int d = map.size();

    if (map.size() == 23)
        cout << 'S';
    else
        cout << 'N';
    return 0;
    

    
}
