#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  vector<int> vector1;

  int x{0}, value{0}, total{};

  cout << "Please Enter No. of the elements to store in vector: ";
  cin >> x;

  for (int i = 0; i < x; i++)
  {
    cout << "Please Enter the element No. " << i+1 << " : ";
    cin >> value;

    vector1.push_back(value);
  }
  for (auto values : vector1)
  {
    total += values;
  }
  for (int i = 0; i < x; i++)
  {
    total += vector1.at(i);
  }

  cout << total << endl;

  
  

  return 0;
}