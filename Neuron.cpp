//
// Created by werd on 17/01/17.
//

#include "Neuron.h"

/**
 * Constructor
 * @param id
 */
Neuron::Neuron(const unsigned int id){
    set_id(id);
}

/**
 *
 * @param level
 * @param number
 */
Neuron::Neuron(const unsigned int level, const unsigned int number) {
    this->set_level(level);
    this->set_number(number);
}

/**
 *
 * @return
 */
unsigned int Neuron::get_id() const{
   return this->_id ;
}

/**
 *
 * @param newId
 * @return
 */
unsigned int Neuron::set_id(const unsigned int newId){
    this->_id = newId;
}
int Neuron::calculate() {
//    g_lock.lock();
    //cout << "entered thread " << std::this_thread::get_id() << endl;
    for(int x =0;x <1000000000 ; x++){

    }
    return 1000000000;
    //cout << "Count to " <<  i << ", " << d << ", " << s << std::endl;
    //cout << "leaving thread " << std::this_thread::get_id() << endl;
//    g_lock.unlock();
}
void Neuron::calculateT( Neuron *obj){
    std::cout << "Thread calculation " << obj->calculate() << std::endl;

    // auto t1 = std::async(obj->calculate);
    //auto res = t1.get();
    //std::thread thr5(this->calculate());
    //thr5.join();
}

/**
 *
 * @param newLevel
 */
void Neuron::set_level(const unsigned int newLevel) {
    if (newLevel >= 0){
        this->_level = newLevel;
    }
    else{
        std::cout << "Cannot set negative level for Neutron" << std::endl;
    }

}

/**
 *
 * @return
 */
unsigned int Neuron::get_level() const {
    return this->_level;
}

/**
 *
 * @return
 */
unsigned int Neuron::get_number() const {
    return this->_number;
}

/**
 *
 * @param newNumber
 */
void Neuron::set_number(const unsigned int newNumber) {
    this->_number = newNumber;
}


