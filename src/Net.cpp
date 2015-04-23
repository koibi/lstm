/*
 * Net.cpp
 *
 *  Created on: Mar 10, 2015
 *      Author: awecker
 */

#include "Net.h"

using namespace Eigen;
using namespace log4cxx;

LoggerPtr netLogger(Logger::getLogger("netLogger"));

namespace net {

/**
 *
 * @param nrNeuronsPerLayer Die länge des Arrays gibt an wie viele Layer es gibt. Die Elemente im Array geben an wie viele Neurone für das Layer initialisiert werden.
 * Bsp: nrNeuronsPerLayer[1] Layer 1 Inhalt 10 => 10 Neurons im Layer 1.
 */
Net::Net(int nrNeuronsPerLayer[]) {

	/** Erstelle die Gewichtsmatrix. **/
	int count = 0;
	for (unsigned int i = 0;
			i <= (sizeof(nrNeuronsPerLayer) / sizeof(*nrNeuronsPerLayer));
			i++) {
		count += nrNeuronsPerLayer[i];
	}
	weightMatrix = MatrixXd(count, count);
}

Net::~Net() {

}

void create_Net(int nrNeuronsPerLayer[]) {

}

} /* namespace net */
