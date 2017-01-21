//
// Created by werd on 21/01/17.
//

#ifndef UNTITLED_WEIGHT_H
#define UNTITLED_WEIGHT_H
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <future>

using std::cin;
using std::cout;
using std::endl;
using std::thread;
using std::vector;

template <typename T>
class Weight {

    //Weight();

    vector<T> _weights;
    std::mutex _lock;

    void add(T element)
    {
        _lock.lock();
        _weights.push_back(element);
        _lock.unlock();
    }
    void remove(T element)
    {
        _lock.lock();
        _weights.erase(element);
        _lock.unlock();
    }
    void dump()
    {
        _lock.lock();
        for(auto e: _weights)
            std::cout << e << std::endl;
        _lock.unlock();
    }
};


#endif //UNTITLED_WEIGHT_H
