/*
 * Perceptron.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: awecker
 */

#include "Perceptron.h"

using namespace std;

double Perceptron::calcOutput(Eigen::VectorXd inputData) {
	if (inputData.size() == this->nrInputs) {
		cout << "ERROR: Data size != Perceptron Inputs" << endl;
		exit(0);
	} else {
		this->nrOut = inputData.dot(this->weights);
		return this->nrOut;
	}
}

Perceptron::Perceptron() {
	nrInputs = 2;
	weights = Eigen::VectorXd(2);
	nrOut = -1;

}

Perceptron::~Perceptron() {
}

