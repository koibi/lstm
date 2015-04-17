/*
 * Perceptron.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: awecker
 */

#include "Perceptron.h"
#include <math.h>

using namespace std;
using namespace log4cxx;

LoggerPtr perceptronLogger(Logger::getLogger("perceptronLogger"));

/**
 * Globaler counter um die Perzeptrone durchzunummerieren.
 */
int myCounter = 0;

/**
 *
 * Konstruktor für das Perzeptron.
 *
 * @param nrInputs Anzahl der Inputs für das Perzeptron int.
 * @param myTheta double Schwelwert für die schwellwertfunktion.
 */
Perceptron::Perceptron(int nrInputs, double myTheta) {

	myCounter++;
	myNumber = myCounter;

	this->myTheta = myTheta;
	this->nrInputs = nrInputs;

	//initialisation switches
	output_init = false;
	myTheta_init = false;
	nrInput_init = false;
	weights_init = false;

	output = -9999.999; /**< Setze output uninitialisiert auf -9999.999 beim erstellen des Perzeptrons.  */

}

/**
 * Destruktor
 */
Perceptron::~Perceptron() {
	myCounter--;
}

/**
 * Ueberpruefe ob alle variablen initialisiert sind.
 */
void Perceptron::check_init() {

	LOG4CXX_DEBUG(perceptronLogger, "Init perceptron nr:" << myNumber);

	/** Pruefe ob die Gewichte initialisiert sind. Wenn nicht initialisiere die Gewichte zufaellig. */
	if (!weights_init) {
		weights = Eigen::VectorXd::Random(2);

		for (int i = 0; i < weights.size(); i++) {
			weights(i) = abs((double) weights(i));
		}

		LOG4CXX_DEBUG(perceptronLogger,
				"Weight matrix was not initialized. " << " Random initialisation!!! " << "\n \n" << weights);
		weights_init = true;

	}

}

/**
 * Perform the calculation for the perceptron .
 *
 * @param inputData input Eigen::VectorXd
 */
double Perceptron::run(Eigen::VectorXd inputData) {
	check_init();
	this->f_in(&inputData);
	this->f_activation();
	return this->f_out();;
}

void Perceptron::f_in(Eigen::VectorXd *inputData) {
	output = weights.dot(*inputData);

}

void Perceptron::f_activation() {
	if (output > myTheta) {
		output = 1;
	} else {
		output = 0;
	}
}

double Perceptron::f_out() {

	return output;
}

