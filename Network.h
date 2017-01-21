//
// Created by werd on 21/01/17.
//

#ifndef UNTITLED_NETWORK_H
#define UNTITLED_NETWORK_H
#include <iostream>
#include <thread>
#include <mutex>
#include <future>
#include "Neuron.h"

using std::cin;
using std::cout;
using std::endl;
using std::thread;


class Network {

public:
    unsigned int get_hiddenLayerSize() const;
    void set_hiddenLayerSize(unsigned int _hiddenLayerSize);
    char *get_networkName() const;

    void set_networkName(char *_networkName);
protected:
    unsigned int _hiddenLayerSize = 1;
    char* _networkName;


};


#endif //UNTITLED_NETWORK_H
