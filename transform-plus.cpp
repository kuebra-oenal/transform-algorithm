#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void disp_v(T & v){
    if(!v.size()) return;
    for(auto e : v) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {

    vector<int> v1 = { 1, 2, 3 };
    vector<int> v2 = { 4, 5, 6 };
    vector<int> v3(v1.size());

    disp_v(v1);
    disp_v(v2);

    plus<long> f;

    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), f);

    disp_v(v3);

    return 0;

}