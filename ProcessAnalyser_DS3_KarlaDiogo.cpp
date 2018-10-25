/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProcessAnalyser_DS3_KarlaDiogo.cpp
 * Author: karla
 * 
 * Created on 25 de Outubro de 2018, 12:30
 */

#include "ProcessAnalyser_DS3_KarlaDiogo.h"

ProcessAnalyser_DS3_KarlaDiogo::ProcessAnalyser_DS3_KarlaDiogo() {
}

ProcessAnalyser_DS3_KarlaDiogo::ProcessAnalyser_DS3_KarlaDiogo(const ProcessAnalyser_DS3_KarlaDiogo& orig) {
}

ProcessAnalyser_DS3_KarlaDiogo::~ProcessAnalyser_DS3_KarlaDiogo() {
}

List<SimulationScenario*>* ProcessAnalyser_DS3_KarlaDiogo::getScenarios() const {
}

List<SimulationControl*>* ProcessAnalyser_DS3_KarlaDiogo::getControls() const {
    
}

List<SimulationResponse*>* ProcessAnalyser_DS3_KarlaDiogo::getResponses() const {
}

List<SimulationControl*>* ProcessAnalyser_DS3_KarlaDiogo::extractControlsFromModel(std::string modelFilename) const {
   // return model->getControls();
}

List<SimulationResponse*>* ProcessAnalyser_DS3_KarlaDiogo::extractResponsesFromModel(std::string modelFilename) const {
}

void ProcessAnalyser_DS3_KarlaDiogo::startSimulationOfScenario(SimulationScenario* scenario) {
}

void ProcessAnalyser_DS3_KarlaDiogo::startSimulation() {
}

void ProcessAnalyser_DS3_KarlaDiogo::stopSimulation() {
}

void ProcessAnalyser_DS3_KarlaDiogo::addTraceSimulationListener(traceSimulationProcessListener traceSimulationProcessListener) {
}