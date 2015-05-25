#include "error\ErrorCodes.h"
#include "core\AzureEngine.h"

#include <iostream>

AzureEngine::AzureEngine() : core{} {
	std::cout << "AzureEngine - Creation." << std::endl;
}

int AzureEngine::configure() {
	std::cout << "AzureEngine - Configuration." << std::endl;
	return ERR::NO_ERROR;
}

int AzureEngine::startup() {
	std::cout << "AzureEngine - Startup." << std::endl;
	return ERR::NO_ERROR;
}

int AzureEngine::shutdown() {
	std::cout << "AzureEngine - Shutdown." << std::endl;
	return ERR::NO_ERROR;
}