/*
 * Perceptron.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: awecker
 */

#include "Perceptron.h"

using namespace std;

Perceptron::Perceptron(int nrInputs, double myTheta) {
	this->myTheta = myTheta;
	this->nrInputs = nrInputs;

}

Perceptron::~Perceptron() {
}

double Perceptron::run(Eigen::VectorXd inputData) {
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

