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
	double nrOut;

	double calcOutput(Eigen::VectorXd inputData);

	Perceptron();
	//Erstellt Perceptron Instanz mit einer bestimmten Anzahl an Inputs und outputs.
	Perceptron(int, int);
	virtual ~Perceptron();
};

#endif /* PERCEPTRON_H_ */
