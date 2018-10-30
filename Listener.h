/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Listener.h
 * Author: cancian
 *
 * Created on 22 de Junho de 2018, 18:53
 */

#ifndef LISTENER_H
#define LISTENER_H

#include <string>

#include "Util.h"

class Entity;
class ModelComponent;

class TraceEvent {
public:
	TraceEvent(Util::TraceLevel tracelevel, std::string text) {
		_tracelevel = tracelevel;
		_text = text;
	}
	Util::TraceLevel getTracelevel() const {
		return _tracelevel;
	}
	std::string getText() const {
		return _text;
	}
private:
	Util::TraceLevel _tracelevel;
	std::string _text;
};

class TraceErrorEvent: public TraceEvent {
public:
	TraceErrorEvent(std::string text,std::exception e): TraceEvent(Util::TL_errors, text) {
		_e = e;
	}

    std::exception getException() const {
    	return _e;
    }
private:
	std::exception _e;
};

class TraceSimulationEvent : public TraceEvent {
public:
	ModelComponent* getComponent() const {
		return _component;
	}
	Entity* getEntity() const {
		return _entity;
	}
	double getTime() const {
		return _time;
	}
	TraceSimulationEvent(Util::TraceLevel tracelevel, double time, Entity* entity, ModelComponent* component, std::string text) : TraceEvent(tracelevel, text) {
		_time = time;
		_entity = entity;
		_component = component;
	}
private:
	double _time;
	Entity* _entity;
	ModelComponent* _component;
};

/*!
 * Events related to simulation "process" (usually process analyser), associated to entire replication or simulation events (begin/end/pause of replication/simulation) 
 * TODO: CLASS NOT COMPLETE
 */
class TraceSimulationProcess : public TraceEvent {
public:
	TraceSimulationProcess(Util::TraceLevel tracelevel, std::string text):TraceEvent(tracelevel, text) {
	}
};

typedef void (*traceListener)(TraceEvent);
typedef void (*traceErrorListener)(TraceErrorEvent);
typedef void (*traceSimulationListener)(TraceSimulationEvent);
typedef void (*traceSimulationProcessListener)(TraceSimulationProcess);

/* TODO: To implement as item (1) for DS3
 * used to get and set values no matter the class (for process analyser)
 * should be a wait to invoke a getter or setter no matter the class (a pointer to a member function without specifying the class 
 */

//++++++++NEW+++++++++//
template <typename...> class Listener;
typedef void* memberFunctionGetDoubleVarHandler;
typedef void* memberFunctionSetDoubleVarHandler;

template <typename T1, typename T2>
class Listener<T1, T2> {
    public:
        double memberFunctionGet(T1* ptrClass, double (T1::*memberFunctionGetDoubleVarHandler)()){ 
            return (*memberFunctionGetDoubleVarHandler)(); 
        }
        
        void memberFunctionSet(T2* ptrClass, void (T2::*memberFunctionSetDoubleVarHandler)(), double value){ 
            (ptrClass->*memberFunctionSetDoubleVarHandler)(value); 
        }
};



//template<classname T>
/*typedef void* memberFunctionGetDoubleVarHandler; //template ... typedef double (T::*getDoubleVarHandler)() or something like that
typedef void* memberFunctionSetDoubleVarHandler;

    template<typename Type>
    double memberFunctionGet(void* ptrClass, double (Type::*memberFunctionGetDoubleVarHandler)()) { 
        return (*memberFunctionGetDoubleVarHandler)(); 
    }

    template<typename Type>
    void memberFunctionSet(void* ptrClass, void (Type::*memberFunctionSetDoubleVarHandler)(), double value) { 
        (ptrClass->*memberFunctionSetDoubleVarHandler)(value); 
    }
*/
/*
template <typename T, typename F>
double memberFunctionGetDoubleVarHandler(T t, F f){
    return (t.*f)();
}

template <typename T, typename F>
void memberFunctionSetDoubleVarHandler(double d){
    typedef void (T::*memberFunctionSetDoubleVarHandler)(double);
    memberFunctionSetDoubleVarHandler toCall = &T::F;
    (*toCall)(d);
}*/

/*
template<class A>
class Listener {
public:
  typedef double A::*memberFunctionGetDoubleVarHandler();
};

template<class A>
double Listener<A>::*memberFunctionGetDoubleVarHandler() {
  return A;
}*/



//class Listener {
//public:
//	Listener();
//	Listener(const Listener& orig);
//	virtual ~Listener();
//private:
//
//};
//
//class TraceEvent {
//public:
//	TraceEvent(std::string text) {
//		_text = text;
//	}
//	std::string getText() const {
//		return _text;
//	}
//public:
//private:
//	std::string _text;
//};
//
//class TraceListener : public Listener {
//public:
//	TraceListener() {}
//	virtual void trace(TraceEvent e)=0;
//};
//
//class ReplicationEvent {
//public:
//	ReplicationEvent() {}
//private:
//};
//
//class ReplicationListener : public Listener {
//	ReplicationListener() {}
//	virtual void replicationStart(ReplicationEvent e) = 0;
//	virtual void replicationEnd(ReplicationEvent e) = 0;
//	virtual void replicationStep(ReplicationEvent e) = 0;
//};

#endif /* LISTENER_H */

