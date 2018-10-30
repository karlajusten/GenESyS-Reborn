/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProcessAnalyser_DS3_Karla.h
 * Author: karla
 *
 * Created on 28 de Outubro de 2018, 10:34
 */

#ifndef PROCESSANALYSER_DS3_KARLA_H
#define PROCESSANALYSER_DS3_KARLA_H

#include "ProcessAnalyser_if.h"
#include "SimulationScenario.h"
#include "SimulationResponse.h"
#include "SimulationControl.h"

class ProcessAnalyser_DS3_Karla: public ProcessAnalyser_if {
public:
    ProcessAnalyser_DS3_Karla();
    ProcessAnalyser_DS3_Karla(const ProcessAnalyser_DS3_Karla& orig);
    ~ProcessAnalyser_DS3_Karla();
public:
	List<SimulationScenario*>* getScenarios() const;
	List<SimulationControl*>* getControls() const;
	List<SimulationResponse*>* getResponses() const;
	List<SimulationControl*>* extractControlsFromModel(std::string modelFilename) const;
	List<SimulationResponse*>* extractResponsesFromModel(std::string modelFilename) const;
	void startSimulationOfScenario(SimulationScenario* scenario);
	void startSimulation();
	void stopSimulation();
	void addTraceSimulationListener(traceSimulationProcessListener traceSimulationProcessListener);
private:

    /*
ProcessAnalyser myPAN = new....;
SimulationControl control* = myPAN->extractControlsFROMmODEL(*model)->begin();
myPAN->getControls()->insert(control);*/
    
    
};

#endif /* PROCESSANALYSER_DS3_KARLA_H */

