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

#include <stdlib.h>
#include <log4cxx/logger.h>
#include <log4cxx/xml/domconfigurator.h>
#include <log4cxx/ndc.h>
#include <locale.h>

using namespace Eigen;
using namespace std;
using namespace net;
using namespace log4cxx;
using namespace log4cxx::xml;
using namespace log4cxx::helpers;

LoggerPtr loggerMyMain(Logger::getLogger("main"));

int main() {

	DOMConfigurator::configure("Log4cxxConfig.xml");
	LOG4CXX_DEBUG(loggerMyMain, "Start Program! ... ");

	Eigen::VectorXd v(2);
	v << 0.5, 0.5;

	Perceptron p(2);
	Perceptron p1(2);
	LOG4CXX_DEBUG(loggerMyMain, " output:= " << p.run(v));
	LOG4CXX_DEBUG(loggerMyMain, " output:= " << p1.run(v));

	int arr[3] = {3,2,1};
	Net n(arr);

	return 0;
}
