/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimulationControl.cpp
 * Author: cancian
 * 
 * Created on 10 de Outubro de 2018, 18:01
 */

#include "SimulationControl.h"

SimulationControl::SimulationControl(void* type, std::string name, memberFunctionGetDoubleVarHandler getHandler, memberFunctionSetDoubleVarHandler setHandler): SimulationResponse(type, name, getHandler) {
    this->_type = type;
    this->_memberFunctionSetDoubleHandler = setHandler;
}

SimulationControl::SimulationControl(const SimulationControl& orig): SimulationResponse(orig) {
}

SimulationControl::~SimulationControl() {
}

void SimulationControl::getValue(double value) {
    //this->_memberFunctionSetDoubleHandler(value);
    
    //memberFunctionSet(_type, _memberFunctionSetDoubleHandler, value);
    
    /*Listener<T> obj;
    obj.memberFunctionSet(_type, _memberFunctionSetDoubleHandler, value);*/
    
    Listener<void*, memberFunctionSetDoubleVarHandler, double> obj;
    obj.memberFunctionSet(_type, _memberFunctionSetDoubleHandler, value); 
    
}

