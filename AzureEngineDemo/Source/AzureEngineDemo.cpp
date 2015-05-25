#include <iostream>

#include "core\AzureEngine.h"
#include "error\ErrorCodes.h"

unsigned int main() {

	std::cout << "AzureEngineDemo - main()" << std::endl;

	AzureEngine engine{};
	engine.configure();

	return ERR::NO_ERROR;
}