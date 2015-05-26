#include "core\Core.h"
#include "const\ErrorCodes.h"
#include "const\EngineStateCodes.h"

#include <iostream>

Core::Core() : active{ ENST::STOPPED }, engineState{ ENST::STOPPED } {
	std::cout << "Core - Creation." << std::endl;
}

int Core::configure() {
	std::cout << "Core - Configuration." << std::endl;
	changeEngineState(active, ENST::STARTUP);

	return ERR::NO_ERROR;
}

int Core::startup() {
	std::cout << "Core - Startup." << std::endl;
	changeEngineState(ENST::RUNNING, ENST::RUNNING);

	// Main game loop
	while (active) {
		
	}
	
	return ERR::NO_ERROR;
}

int Core::shutdown() {
	std::cout << "Core - Shutdown." << std::endl;
	return ERR::NO_ERROR;
}

void Core::changeEngineState(int active, int engineState) {
	this->active = active;
	this->engineState = engineState;

	std::cout << "Core - Changed engine states: " << active << " / " << engineState << std::endl;
}