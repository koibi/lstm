/*
 * Perceptron.cpp
 *
 *  Created on: Feb 13, 2015
 *      Author: awecker
 */

#include "Perceptron.h"



Perceptron::Perceptron() {
	nrIn = new Eigen::VectorXd(2);
	weights = new Eigen::VectorXd(2);
	*weights << 0.5, 0.5;
	nrOut = new Eigen::VectorXd(1);
	// TODO Auto-generated constructor stub

}

Perceptron::~Perceptron() {
	delete nrIn;// TODO Auto-generated destructor stub
}

