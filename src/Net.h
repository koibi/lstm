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
#include <log4cxx/logger.h>

namespace net {

class Net {
private:
	int nrInputNeurons; /**< TODO **/
	bool isNrInputNeuronsSet; /**< TODO **/

	int nrOutputNeurons; /**< TODO **/
	bool isNrOutputNeuronsSet; /**< TODO **/

	Eigen::MatrixXd weightMatrix; /**< TODO **/
	bool isWeightMatrixSet; /**< TODO **/

public:

	void setInputLayer(int nrNeurons); /**< TODO **/
	void setHiddenLayer(int nrNeurons); /**< TODO **/
	void setOutputLayer(int nrNeurons); /**< TODO **/
	void setWeightMatrix(); /**< TODO **/

	//Input FUnctons

	Net(int nrNeuronsPerLayer[]);
	virtual ~Net();
};

} /* namespace net */

#endif /* NET_H_ */
