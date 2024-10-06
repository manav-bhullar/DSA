#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector <int> diviser_1;
vector <int> diviser_2;
vector <int> common_diviser;


int diviser(int a, int b);
int find_common_diviser(vector <int> diviser_1, vector <int> diviser_2);

int main (){
    int a, b;
    cin>> a >> b;
    diviser(a, b);
    find_common_diviser(diviser_1, diviser_2);
    sort(common_diviser.begin(), common_diviser.end());
    cout << common_diviser[common_diviser.size()-1] << endl;
    return 0;
}

int diviser(int a, int b){
    for (int i = 1; i <= a; i++){
        if (a % i == 0){
            diviser_1.push_back(i);
        }
    }

    for (int i = 1; i <= b; i++){
        if (b % i == 0){
            diviser_2.push_back(i);
        }
    }
    return 0;
}

int find_common_diviser(vector <int> diviser_1, vector <int> diviser_2){
    for (int i = 0; i < diviser_1.size(); i++){
        for(int j = 0; j < diviser_2.size(); j++){
            if(diviser_1[i] == diviser_2[j]){
                common_diviser.push_back(diviser_1[i]);
            }
        }
    }
    return 0;
}

