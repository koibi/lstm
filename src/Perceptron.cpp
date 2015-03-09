/*
 * Perceptron.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: awecker
 */

#include "Perceptron.h"



Perceptron::Perceptron() {
	nrIn = Eigen::VectorXd(2);
	weights = Eigen::VectorXd(2);
	weights << 0.5, 0.5;
	nrOut = Eigen::VectorXd(1);
	// TODO Auto-generated constructor stub

}

Perceptron::~Perceptron() {
}

