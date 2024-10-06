#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n = 1234567890;

int main(){
    vector<int> vec;
    while( n != 0){
        vec.push_back(n%10);
        n /= 10;
    }

    reverse(vec.begin(), vec.end());
    for (auto it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << " ";
}

    return 0;
}