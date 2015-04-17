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
#include <log4cxx/logger.h>

class Perceptron {
private:
	int myNumber;

	//Inputfunktion. Calculates transformations on input data.
	void inline f_in(Eigen::VectorXd *inputData);
	//Inner Funktion. Or activation function.
	void inline f_activation();
	//Output function. Transform the output data.
	double inline f_out();

	// output - current output of this Perceptron
	// myTheta threashhold for the activation function
	// nrInputs Number of inputs. nrIputs.size() == weights.size()
	double output, myTheta;
	int nrInputs;
	bool output_init, myTheta_init, nrInput_init, weights_init;
	void check_init();

public:
	//Weights for inputs.
	Eigen::VectorXd weights;

	double run(Eigen::VectorXd inputData);
	int setWeights(Eigen::VectorXd weights);


	Perceptron(int nrInputs, double myTheta = 0.5);
	virtual ~Perceptron();
};

#endif /* PERCEPTRON_H_ */
