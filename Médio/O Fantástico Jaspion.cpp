#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int nn;
    cin >> nn;

    while (nn--) {
        int n, m;
        cin >> n >> m;
        cin.ignore();

        unordered_map<string, string> dic;

        while (n--) {
            string first, second;
            getline(cin, first);
            getline(cin, second);
            dic[first] = second;
        }

        while (m--) {
            string linha;
            getline(cin, linha);

            istringstream iss(linha);
            string palavra;
            while (iss >> palavra) {
                if (dic.find(palavra) != dic.end())
                    cout << dic[palavra] << ' ';
                else
                    cout << palavra << ' ';
            }
            cout << endl;
        }

        
        cout << endl;
    }

    return 0;
}
