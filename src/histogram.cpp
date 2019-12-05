//
// Created by 任真如 on 2019/12/5.
//

#include "histogram.h"
#include <iostream>

histogram::histogram() {}

histogram::histogram(int b, float _min, float _max) {
    buckets = b;
    min = _min;
    max = _max;
    hist.resize(buckets+1);
    for(int i=0;i<=buckets;i++){
        hist[i] = min + (max-min)/buckets*i;
    }
}

histogram::~histogram() {}

const void histogram::print_hist() {
    for(int i = 0;i<=buckets;i++){
        std::cout<<hist[i]<<endl;
    }
}