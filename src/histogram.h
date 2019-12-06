//
// Created by 任真如 on 2019/12/5.
//

#ifndef HISTOGRAM_HISTOGRAM_H
#define HISTOGRAM_HISTOGRAM_H

#include <vector>
using namespace std;

class Histogram {
private:
    int buckets_num_;
    float min_;
    float max_;
    float bucket_range_;
    vector<float> hist_;
    vector<int> height_;

public:
    Histogram();
    Histogram(int num, float _min, float _max);
    ~Histogram();
    void printHist() const;
    void scan(const vector<float> &data);
//    void scan(const vector<int> &data);
};


#endif //HISTOGRAM_HISTOGRAM_H
