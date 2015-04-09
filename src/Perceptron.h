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
private:
	// Threshhold for neuron activation.
	double myTheta;
	//Inputfunktion. Calculates transformations on input data.
	void inline f_in();
	//Inner Funktion. Or activation function.
	void inline f_activation();
	//Output function. Transform the output data.
	void inline f_out();
	//Number of inputs for the Perceptron.
	int nrInputs;

public:
	//Weights for inputs.
	Eigen::VectorXd weights;


	double run(Eigen::VectorXd inputData);
	int setWeights(Eigen::VectorXd weights);


	Perceptron(int nrInputs, double myTheta);
	virtual ~Perceptron();
};

#endif /* PERCEPTRON_H_ */
