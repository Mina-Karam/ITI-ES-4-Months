#include <iostream>

using namespace std;

int main() 
{
    int i, arr[5] = {0};

    arr[6] = 10; /* Works but takecare of change data you wants */

    cout << "Enter 5 numbers: ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i]; 
    }

    cout << arr[6] << endl; /* Works */

    for (auto /*int*/ values : arr)
    {
        cout << values << " ";
    }
    
    return 0;
}