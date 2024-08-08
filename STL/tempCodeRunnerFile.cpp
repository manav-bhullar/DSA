#include <iostream>
#include <set>
using namespace std;

int main ( ){
    set <int> s;
    for(int i = 0; i< 10; i++){
        s.insert(i + 1);
    }

    cout << "Elements present in the set: "<<endl;
    for(auto i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }

    cout << endl;

    int n = 3; 
    if (s.find(2) != s.end()){
        cout << "Element "<<s.find(2)<<" found in the set" << endl;
    }

    s.erase(s.find(1));
    cout<< "Elements after deleting are: "<<endl;
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout<<endl;

    s.empty() ? cout << "Set is empty" : cout << "Set is not empty"<<endl;

    s.clear();
    cout << "Size of the set after clearing: "<< s.size()<<endl;
}