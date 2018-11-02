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
#include "List.h"


SimulationControl::SimulationControl(std::string type, std::string name, void* prtClass, void* ptrGetMethod, void* ptrSetMethod): SimulationResponse(type, name, prtClass, ptrGetMethod) {
    this->_type = type;
    this->_memberFunctionGetDoubleHandler = make_get_functor(prtClass, ptrGetMethod);
    this->_memberFunctionSetDoubleHandler = make_set_functor(prtClass, ptrSetMethod);
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
    
    //Listener<void*, memberFunctionSetDoubleVarHandler, double> obj;
    //obj.memberFunctionSet(_type, _memberFunctionSetDoubleHandler, value);
    
    //obj.template memberFunctionSet(_type, _memberFunctionSetDoubleHandler, value);
    
    /*memberFunctionSet functionSet(_type, _memberFunctionSetDoubleHandler);
    functionSet(value);*/
    
    _memberFunctionSetDoubleHandler(value);
     
}

