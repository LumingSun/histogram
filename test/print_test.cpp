//
// Created by Luming on 2019/12/6.
//

#include <iostream>
#include "../src/histogram.h"
using namespace std;
int main() {
//    vector<int> v(10);
//    v.assign(8,9);
//    for(int i=0;i<11;i++){
//        cout<<v[i]<<endl;
//    }
//
    float a[6] = {1,2,2,3,4,5};
    vector<float> b(a, a+6);

    Histogram h(2,1,5);
    h.printHist();
    h.scan(b);
    h.printHist();

    return 0;
}