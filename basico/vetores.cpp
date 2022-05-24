#include <iostream>
using namespace std;
#include <vector>

int main (int argc, char **argv){

    vector<string> v = {"one", "two", "three", "four", "five"};
    v.push_back("six");
    v.pop_back(); // retira o último elemento

    vector<string>::iterator palavra = v.end();
    cout << *palavra << endl;


    return 0;
}