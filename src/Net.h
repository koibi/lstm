/*
 * Net.h
 *
 *  Created on: Mar 10, 2015
 *      Author: awecker
 */

#ifndef NET_H_
#define NET_H_

#include <Eigen/Core>
#include <Eigen/Dense>

namespace net {

class Net {
private:
	//Number of input neurons
	int nrInputNeurons;
	bool isNrInputNeuronsSet;

	//Number of output neurons
	int nrOutputNeurons;
	bool isNrOutputNeuronsSet;

	//ConnectionMatrix
	Eigen::MatrixXd weightMatrix;
	bool isWeightMatrixSet;

public:

	void setInputLayer(int nrNeurons);
	void setHiddenLayer(int nrNeurons);
	void setOutputLayer(int nrNeurons);
	void setWeightMatrix();

	//Input FUnctons



	Net();
	virtual ~Net();
};

} /* namespace net */

#endif /* NET_H_ */
