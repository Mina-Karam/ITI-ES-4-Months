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
    
    for (auto /*int*/ values : arr)
    {
        cout << values << " ";
    }
    
    return 0;
}