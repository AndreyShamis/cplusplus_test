#include <iostream>
#include <thread>
#include <mutex>
#include <future>
#include "Neuron.h"
#include "Network.h"

using std::cin;
using std::cout;
using std::endl;
using std::thread;

std::mutex g_lock;

void threadFunction(int i, double d, const std::string &s)
{
//    g_lock.lock();
    //cout << "entered thread " << std::this_thread::get_id() << endl;
    for(int x =0;x <i ; x++){

    }
    cout << "Count to " <<  i << ", " << d << ", " << s << std::endl;
    //cout << "leaving thread " << std::this_thread::get_id() << endl;
//    g_lock.unlock();

}


int main() {
    cout << "Hello, TestWorld!" << endl;
    Neuron *n;
    n = new Neuron(1);
    Neuron n1(1);
    Network *net;
    net = new Network();
    net->set_networkName("Сеть My NN network");
    cout << "Neuron id is " << n->get_id() << endl;
    try{
        cout<< "Netowrk name:[" << net->get_networkName() << "]." << endl;
        std::thread thr1(threadFunction, 100000000, 1, "example");
        std::thread thr2(threadFunction, 100000000, 2, "example");
        std::thread thr3(threadFunction, 100000000, 3, "example");
        std::thread thr4(threadFunction, 100000000, 4, "example");

 //       std::thread thr5(n->calculate());
//        auto t1 = std::async(&Neuron::calculate);
//        auto res = t1.get();
        // Usage:
        //MainWindow* window = this;   // Or whatever the target window object is
        std::thread t1(&Neuron::calculateT, n);
        t1.join();

        //t1.detach();
        n->set_id(2);
  //      cout << "Neuron id is " << n->getId() << "Thread result is " << res << endl;
        n->set_id(3);
        cout << "Neuron id is " << n->get_id() << endl;
        thr1.join();
        thr2.join();
        thr3.join();
        thr4.join();
   //     thr5.join();
        //std::thread thr1(n->calculate);
    }
    catch (const std::exception &ex){
        cout << "Error :" <<  ex.what() << endl;
    }

    n->set_id(4);
    cout << "Neuron id is " << n->get_id() << endl;
    return 0;
}