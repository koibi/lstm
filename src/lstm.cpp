//============================================================================
// Name        : lstm.cpp
// Author      : awecker
// Version     :
// Copyright   : GLPL Included
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Perceptron.h"
#include "Net.h"

using namespace Eigen;
using namespace std;
using namespace net;

int main() {

	Eigen::VectorXd v(2);

	v  << 0.5,0.5;

	Perceptron p(2);
	p.run(v);

	return 0;
}
