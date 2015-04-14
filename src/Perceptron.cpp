/*
 * Perceptron.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: awecker
 */

#include "Perceptron.h"


using namespace std;
using namespace log4cxx;


LoggerPtr perceptronLogger(Logger::getLogger( "perceptronLogger"));

Perceptron::Perceptron(int nrInputs, double myTheta) {
	this->myTheta = myTheta;
	this->nrInputs = nrInputs;

	//initialisation switches
	output_init=false;
	myTheta_init=false;
	nrInput_init=false;
	weights_init=false;

	output = -9999.999;

}

Perceptron::~Perceptron() {
}

void Perceptron::check_init() {
	if (!output_init) {
		LOG4CXX_ERROR(perceptronLogger,"First run. No output initialization." << " output = " << output);
	}

	if (!myTheta_init) {

	} else if (!nrInput_init) {

	} else if (!weights_init) {

	}

}

double Perceptron::run(Eigen::VectorXd inputData) {
	check_init();
	this->f_in(&inputData);
	this->f_activation();
	this->output = this->f_out();
	return output;
}

void Perceptron::f_in(Eigen::VectorXd *inputData) {
	if (!inputData->size() == weights.size()) {
		std::cout << "ERROR Number inputs for Perceptron != number of weigts." << std::endl;
	}
	std::cout << "somthing wrong " << std::endl;

}

void Perceptron::f_activation() {

}

double Perceptron::f_out() {

	return 0;
}

