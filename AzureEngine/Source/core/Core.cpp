#include "error\ErrorCodes.h"
#include "core\Core.h"

#include <iostream>

Core::Core() {
	std::cout << "Core - Creation." << std::endl;
}

int Core::configure() {
	std::cout << "Core - Configuration." << std::endl;
	return ERR::NO_ERROR;
}

int Core::startup() {
	std::cout << "Core - Startup." << std::endl;
	return ERR::NO_ERROR;
}

int Core::shutdown() {
	std::cout << "Core - Shutdown." << std::endl;
	return ERR::NO_ERROR;
}