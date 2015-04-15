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

Perceptron::Perceptron(int nrInputs, double myTheta) {
	this->myTheta = myTheta;
	this->nrInputs = nrInputs;

	//initialisation switches
	output_init = false;
	myTheta_init = false;
	nrInput_init = false;
	weights_init = false;

	output = -9999.999;

}

Perceptron::~Perceptron() {
}

void Perceptron::check_init() {

	if (!weights_init) {
		weights = Eigen::VectorXd::Random(2);

		for (int i = 0; i < weights.size(); i++) {
			weights (i) = abs((double)weights(i));
		}

		LOG4CXX_DEBUG(perceptronLogger,
				"Weight matrix was not initialized. " << " Random initialisation!!! " << "\n \n" << weights);
		weights_init = true;

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
	output = weights.dot(*inputData);

}


void Perceptron::f_activation() {

}

double Perceptron::f_out() {

	return 0;
}

