#pragma once
#include "Core.h"

class AzureEngine {

public:
	// Engine constructor
	AzureEngine();

	// Engine configuration function
	int configure();

	// Engine startup function
	int startup();

	// Engine shutdown function
	int shutdown();

private:
	Core core;

};