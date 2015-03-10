/*
 * Perceptron.h
 *
 *  Created on: Feb 13, 2015
 *      Author: awecker
 */

#ifndef PERCEPTRON_H_
#define PERCEPTRON_H_
#include <Eigen/Core>
#include <Eigen/Dense>
#include <iostream>

class Perceptron {

public:
	int nrInputs;
	Eigen::VectorXd weights;
	double myTheta;
	double out;


	double calcOutput(Eigen::VectorXd inputData);

	Perceptron(double threshhold, double nrInputs, Eigen::VectorXd weightMatrix);
	virtual ~Perceptron();
};

#endif /* PERCEPTRON_H_ */
