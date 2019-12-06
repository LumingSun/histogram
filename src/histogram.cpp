//
// Created by 任真如 on 2019/12/5.
//

#include "histogram.h"
#include <iostream>

Histogram::Histogram() {
    buckets_num_ = 0;
    bucket_range_ = 0;
    max_ = 0;
    min_ = 0;
}

Histogram::Histogram(const int num, const float _min, const float _max) {
    buckets_num_ = num;
    min_ = _min;
    max_ = _max;
    bucket_range_ = (max_-min_)/buckets_num_;
    hist_.resize(buckets_num_+1);
    height_.resize(buckets_num_+1,0);
    for(int i=0;i<=buckets_num_;i++){
        hist_[i] = min_ + (max_-min_)/buckets_num_*i;
    }
    hist_.push_back(hist_[buckets_num_]+bucket_range_);
}

Histogram::~Histogram() = default;

void Histogram::printHist() const{
    std::cout<<"bucket range: "<<bucket_range_<<endl;
    for(int i = 0;i<buckets_num_+1;i++){
        std::cout<<"bucket range "<<hist_[i]<<"--"<<hist_[i+1]<<" height: "<<height_[i]<<endl;

    }
}

void Histogram::scan(const vector<float> &data) {
    for(float i : data){
        int pos = int((i-min_)/bucket_range_);
        height_[pos] ++;
    }
}

//void Histogram::scan(const vector<int> &data) {
//    for(int i=0;i<data.size();i++){
//        int pos = (data[i]-min_)/bucket_range_;
//        cout<<data[i]<<" "<<pos<<endl;
//        height_[pos] ++;
//    }
//}