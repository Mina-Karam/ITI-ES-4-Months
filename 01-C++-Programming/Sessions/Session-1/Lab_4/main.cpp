#include <iostream>

using namespace std;

int main() 
{
    int i, arr[5] = {0};
     
    cout << "Enter 5 numbers: ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i]; 
    }
    
    for (i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}