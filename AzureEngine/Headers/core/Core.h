#pragma once

class Core {

public:
	// Core constructor
	Core();

	// Core configuration function
	int configure();

	// Core startup function
	int startup();

	// Core shutdown function
	int shutdown();

	// Function that changes values of 'active' and 'engineState'
	void changeEngineState(int active, int engineState);

private:
	int active;
	int engineState;

};