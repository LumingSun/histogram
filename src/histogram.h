//
// Created by 任真如 on 2019/12/5.
//

#ifndef HISTOGRAM_HISTOGRAM_H
#define HISTOGRAM_HISTOGRAM_H

#include <vector>
using namespace std;

class histogram {
private:
    int buckets;
    float min;
    float max;
    vector<float> hist;
public:
    histogram();
    histogram(int b, float _min, float _max);
    ~histogram();
    const void print_hist();
};


#endif //HISTOGRAM_HISTOGRAM_H
