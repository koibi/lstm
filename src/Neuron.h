/*
 * Neuron.h
 *
 *  Created on: Mar 19, 2015
 *      Author: awecker
 */

#ifndef NEURON_H_
#define NEURON_H_

namespace nr {

class Neuron {
private:
	//Number of calculations since beginning of calculation
	int countOutput;
	//Last output
	double lOutput;
	bool outputInit;
public:
	Neuron();
	virtual ~Neuron();
};

} /* namespace nr */

#endif /* NEURON_H_ */
