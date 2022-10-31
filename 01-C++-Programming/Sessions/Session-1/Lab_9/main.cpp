#include <iostream>

using namespace std;

int main() 
{
    int i, sum = 0;
    int arrNum[10] = {0};

    cout << "Enter 10 numbers: ";
    
    for (i = 0; i < 10; i++)
    {
        cin >> arrNum[i];
        sum += arrNum[i];
    }

    cout << sum << endl;
    
    return 0;
}