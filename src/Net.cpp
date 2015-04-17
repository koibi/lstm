/*
 * Net.cpp
 *
 *  Created on: Mar 10, 2015
 *      Author: awecker
 */

#include "Net.h"

namespace net {

Net::Net() {
	//weightMatrixIsSet = false;
}

Net::~Net() {

}

void create_Net(int nrLayers) {

	int *perceptronPerLayer = new int[nrLayers];
	float *weightMatrix = new float[nrLayers*nrLayers];

	delete[] perceptronPerLayer;
	delete[] weightMatrix;

}

} /* namespace net */
