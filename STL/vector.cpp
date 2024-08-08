#include </Users/manav/Library/CloudStorage/OneDrive-thapar.edu/Codes/DSA/STL/stdc++.h>
using namespace std;

int main() {
    vector <int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }

    cout << "the elements in the vector are: ";
    for( auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << "\nThe front element of the vector: "<<v.front();
    cout << "\nThe last element of the vector: "<<v.back();
    cout << "\nThe size of the vector: "<<v.size();
    cout << "\nDeleting the last element of the vector: ";
    v.pop_back();

    cout << '\n Printing the vector after deleting the last element: ';
    for( auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << "\nInserting 100 at the beginning of the vector: ";
    v.insert(v.begin(), 100);
    cout<< "\n the first element of the vector is: "<<v[0]<<endl;
    cout<<"\n Erasing the first element of the vector: ";
    v.erase(v.begin());
    cout<< "\n the first element of the vector is: "<<v[0]<<endl;

    if (v.empty())
        cout << "\n The vector is empty";
    else
        cout << "\n The vector is not empty";
}