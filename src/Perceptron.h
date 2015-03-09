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

class Perceptron {

public:
	Eigen::VectorXd weights;
	Eigen::VectorXd nrIn;
	Eigen::VectorXd nrOut;

	Perceptron();
	//Erstellt Perceptron Instanz mit einer bestimmten Anzahl an Inputs und outputs.
	Perceptron(int, int);
	virtual ~Perceptron();
};

#endif /* PERCEPTRON_H_ */
