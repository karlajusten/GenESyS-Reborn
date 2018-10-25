/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProcessAnalyser_DS3_KarlaDiogo.h
 * Author: karla
 *
 * Created on 25 de Outubro de 2018, 12:30
 */

#ifndef PROCESSANALYSER_DS3_KARLADIOGO_H
#define PROCESSANALYSER_DS3_KARLADIOGO_H

#include "ProcessAnalyser_if.h"
#include "SimulationScenario.h"
#include "SimulationResponse.h"
#include "SimulationControl.h"

class ProcessAnalyser_DS3_KarlaDiogo {
public:
    ProcessAnalyser_DS3_KarlaDiogo();
    ProcessAnalyser_DS3_KarlaDiogo(const ProcessAnalyser_DS3_KarlaDiogo& orig);
    virtual ~ProcessAnalyser_DS3_KarlaDiogo();
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

};

#endif /* PROCESSANALYSER_DS3_KARLADIOGO_H */

