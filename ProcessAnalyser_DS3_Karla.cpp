/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProcessAnalyser_DS3_Karla.cpp
 * Author: karla
 * 
 * Created on 28 de Outubro de 2018, 10:34
 */

#include "ProcessAnalyser_DS3_Karla.h"

ProcessAnalyser_DS3_Karla::ProcessAnalyser_DS3_Karla() {
}

ProcessAnalyser_DS3_Karla::ProcessAnalyser_DS3_Karla(const ProcessAnalyser_DS3_Karla& orig) {
}

ProcessAnalyser_DS3_Karla::~ProcessAnalyser_DS3_Karla() {
}

List<SimulationScenario*>* ProcessAnalyser_DS3_Karla::getScenarios() const {
}

List<SimulationControl*>* ProcessAnalyser_DS3_Karla::getControls() const {
    
}

List<SimulationResponse*>* ProcessAnalyser_DS3_Karla::getResponses() const {
}

List<SimulationControl*>* ProcessAnalyser_DS3_Karla::extractControlsFromModel(std::string modelFilename) const {
   
}

List<SimulationResponse*>* ProcessAnalyser_DS3_Karla::extractResponsesFromModel(std::string modelFilename) const {
}

void ProcessAnalyser_DS3_Karla::startSimulationOfScenario(SimulationScenario* scenario) {
}

void ProcessAnalyser_DS3_Karla::startSimulation() {
}

void ProcessAnalyser_DS3_Karla::stopSimulation() {
}

void ProcessAnalyser_DS3_Karla::addTraceSimulationListener(traceSimulationProcessListener traceSimulationProcessListener) {
}
