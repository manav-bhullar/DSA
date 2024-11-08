#include <iostream>
#include <map>
using namespace std;


class numberHash{
    private:
    int n;
    int* arr;
    int* hash;
    int max_array_size;

    public:
    numberHash(int size): n(size), max_array_size(0), arr(nullptr), hash(nullptr){
        arr = new int[n];
    };

    ~numberHash() {
        delete[] arr;
        delete[] hash;
    }

    void create(){
        for(int i = 0; i < n ; i++){
            cout<<"Enter element no."<<i + 1<<endl;
            cin>>arr[i];
        }
    }

    int greatest(){
        int max = 0;
        for(int i = 0; i < n; i++){
            if(arr[max] < arr[i]){
                max = i;
            }
        }
        return max;
    }

    void createHash(){
        max_array_size= arr[greatest()] + 1;
        hash = new int[max_array_size]();
        for (int i = 0 ; i < n ; i++){
            int temp  = arr[i];
            hash[temp] = hash[temp] + 1;
        }
    }



    void displayHash(){
        for(int i = 0; i < max_array_size; i++){
            if (hash[i] > 0) {  // Display only non-zero frequencies
                cout << "Element " << i << ": " << hash[i] << " times" << endl;
            }
        }
    }

    void binding(){
        create();
        createHash();
        displayHash();
    }
};

class alphabetHash {
    private:
    int* hash;  // Array to store the frequency of each character

    public:
    alphabetHash() {
        hash = new int[26]();  // Allocate and initialize hash array to 0 for 26 letters
    }

    ~alphabetHash() {
        delete[] hash;  // Free memory for hash
    }

    // Create a frequency hash for alphabet characters
    void create() {
        char ch;
        cout << "Enter characters (enter '.' to stop): " << endl;

        while (true) {
            cin >> ch;  // Input a character
            if (ch == '.') {  // Stop condition
                break;
            }

            // Convert to lower case and check if it's a valid letter
            ch = tolower(ch);
            if (ch >= 'a' && ch <= 'z') {
                hash[ch - 'a']++;  // Increment the frequency for the character
            } else {
                cout << "Please enter a valid alphabetic character." << endl;
            }
        }
    }

    // Display the frequency of each character
    void displayHash() {
        cout << "\nCharacter Frequency Count:" << endl;
        for (int i = 0; i < 26; i++) {
            if (hash[i] > 0) {  // Display only non-zero frequencies
                cout << "Character '" << char(i + 'a') << "': " << hash[i] << " times" << endl;
            }
        }
    }

    // Combine all the steps
    void binding() {
        create();      // Get the input
        displayHash(); // Display the frequency counts
    }
};

class stlA{
    private:

    public:
    stlA(){
        map<char, int> hash;
        char ch;
        while (true){
            cin>>ch;
            if(ch == '.'){
                break;
            }
            else{
                hash[ch]++;
            }
        }

        for(auto i = hash.begin(); i != hash.end(); i++){
            cout<<i->first<<" "<<i->second<<endl;
        }

    }
};



// int main(){
//     int size;
//     // cout<<"Enter the size of the array"<<endl;
//     // cin>>size;
//     // numberHash obj(size);
//     // obj.binding();
//     alphabetHash obj;  
//     obj.binding();
//     return 0;
// }

// int main () {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i =0; i< n; i++){
//         cin >> arr[i];
//     }

//     map<int, int > hash;
//     for(int i = 0; i < n; i++){
//         hash[arr[i]]++;
//     }
//     for (auto i = hash.begin(); i != hash.end(); i++){
//         cout<<i->first<<" "<<i->second<<endl;
//     }
//     return 0;
// }

int main(){
    stlA obj;
    return 0;
}