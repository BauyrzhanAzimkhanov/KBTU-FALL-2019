#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(11);
    v.push_back(41);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }



    return 0;
}