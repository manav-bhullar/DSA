#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

   int n = 123;
vector<int> vec;
   

   int main() {
     int input = n ;
    int output = 0;
    while( n != 0){
        vec.push_back(n%10);
        n /= 10;
    }
    reverse(vec.begin(), vec.end());

        int power = 1;
    for(auto it = vec.begin(); it != vec.end(); it++){
        output = output + (*it) * power;
        power = power * 10;
    }

        cout << output << endl;

   }