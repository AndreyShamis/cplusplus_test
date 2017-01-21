//
// Created by werd on 17/01/17.
//

#ifndef UNTITLED_NEURON_H
#define UNTITLED_NEURON_H
#include <iostream>
#include <thread>
#include <future>

#include "Weight.h"

class Neuron {

public:
    Neuron(const unsigned int id);
    Neuron(const unsigned int level,const unsigned int number);
    unsigned int get_id() const;
    unsigned int set_id(const unsigned int newId);
    int calculate();
    static void calculateT(Neuron *obj);
    unsigned int get_level() const;
    void set_level(const unsigned int newLevel);
    unsigned int get_number() const;
    void set_number(const unsigned int _number);
private:
    unsigned int _id;
    unsigned int _level;
    unsigned int _number;
    Weight<float>  _weights;
public:

};


#endif //UNTITLED_NEURON_H
