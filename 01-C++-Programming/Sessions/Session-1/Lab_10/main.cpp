#include <iostream>
#include <vector>

using namespace std;

vector <int> vect{1, 2, 3, 4};

int main() 
{
    cout << vect [0] << endl;   /* Array syntax, No boundty Check   */
    cout << vect.at(0) << endl; /* Vector syntax, has boundty Check */

    // cout << vect.at(6) << endl; /* Erorr : std::out_of_range */

    cout << vect.size() << endl;
    vect.push_back(5); /* Add new element at the end of the vector */
    cout << vect.size() << endl;
    vect.pop_back(); /* Remove or delete the element @ the end if the vector */
    vect.clear(); /* Remove all elements in the vector */
    vect.max_size(); /* Return the maximn no of the element that can be stored in the vector */
    vect.empty();   /* Return 1: if the vector is empty, Return 0: if the vector is not empty */
    vect.swap(vect/* Another vector */); /* swap elements between two vectors, must be in the same type */
    
    return 0;
}