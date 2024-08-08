#include </Users/manav/Library/CloudStorage/OneDrive-thapar.edu/Codes/DSA/STL/stdc++.h>
using namespace std;

int main() {
    unordered_set <int> s;
    for (int i = 0; i <= 10; i++) {
        s.insert(i);
    }
    cout << "Elements present in the set are: "<<endl;
    for (auto i = s.begin(); i != s.end(); i++) {
        cout << *i <<" ";
    }
    cout << endl;

    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in unordered set." << endl;
    
    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    if (s.empty() == false)
        cout << "The unordered set is not empty." << endl;
    else
        cout << "The unordered set is empty. " << endl;

    s.clear();
    cout<<"Size of the unordered set after clearing all the elements "<<s.size()<<endl;

    if(s.empty() == false)
        cout<<"the unordered set is not empty."<<endl;
    else    
        cout<<"The unordered set is empty."<<endl;
}