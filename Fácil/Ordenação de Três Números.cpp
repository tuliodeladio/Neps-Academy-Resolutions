#include <iostream>

using namespace std;

int main()
{   
    int a[3];

    for (size_t i = 0; i < 3; i++)
        cin >> a[i];

    for (size_t i = 0; i < 3; i++)
    {
       for (size_t j = 0; j < 3; j++)
        {
            if (a[i] < a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
            
        } 
    }

    for (size_t i = 0; i < 3; i++)
        cout << a[i] << endl;
    
    
    return 0;
}