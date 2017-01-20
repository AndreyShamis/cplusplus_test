//
// Created by werd on 17/01/17.
//

#include "Neuron.h"

Neuron::Neuron(const int id){
    setId(id);
}
int Neuron::getId(){
   return _id ;
}
int Neuron::setId(const int newId){
    _id = newId;
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