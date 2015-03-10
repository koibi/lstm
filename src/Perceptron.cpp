/*
 * Perceptron.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: awecker
 */

#include "Perceptron.h"

using namespace std;

double Perceptron::calcOutput(Eigen::VectorXd inputData) {
	if (!(inputData.size() == this->nrInputs)) {
		cout << "ERROR: Data size != Perceptron Inputs" << "Input size " << inputData.size() << "Inner size " << this->weights.size() << endl;
		return this->out;
	} else {
		this->out = inputData.dot(this->weights);

		if(out > this->myTheta) {
			this->out = 1;
		} else {
			this->out = 0;
		}

		return this->out;
	}
}

Perceptron::Perceptron(double threshhold, double nrInputs, Eigen::VectorXd weightMatrix) {
	myTheta = threshhold;
	this->nrInputs = nrInputs;
	weights = weightMatrix;
	out = -1;


}

Perceptron::~Perceptron() {
}

