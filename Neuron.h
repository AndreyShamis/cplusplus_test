//
// Created by werd on 17/01/17.
//

#ifndef UNTITLED_NEURON_H
#define UNTITLED_NEURON_H
#include <iostream>
#include <thread>
#include <future>


class Neuron {

public:
    Neuron(const int id);
    int getId();
    int setId(const int newId);
    int calculate();
    static void calculateT(Neuron *obj);
private:
    int _id;
};


#endif //UNTITLED_NEURON_H
