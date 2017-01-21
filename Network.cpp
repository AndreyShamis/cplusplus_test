//
// Created by werd on 21/01/17.
//

#include "Network.h"

unsigned int Network::get_hiddenLayerSize() const {
    return _hiddenLayerSize;
}

void Network::set_hiddenLayerSize(unsigned int newHiddenLayerSize) {
    if(newHiddenLayerSize < this->_hiddenLayerSize){
        cout << "Warning. New layer size smaller than current. Need remove old layers" << endl;
    }
    this->_hiddenLayerSize = newHiddenLayerSize;
}

char *Network::get_networkName() const {
    return _networkName;
}

void Network::set_networkName(char *newNetworkName) {
    this->_networkName = newNetworkName;
}
