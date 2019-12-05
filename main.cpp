#include <iostream>
#include "src/histogram.h"
using namespace std;
int main() {
//    vector<int> v(10);
//    v.assign(8,9);
//    for(int i=0;i<11;i++){
//        cout<<v[i]<<endl;
//    }
//
//    cout << "Hello, World!" << std::endl;
    histogram h(10,0,100);
    h.print_hist();

    return 0;
}