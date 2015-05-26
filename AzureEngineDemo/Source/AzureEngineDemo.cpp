#include <iostream>

#include "core\AzureEngine.h"
#include "const\ErrorCodes.h"

unsigned int main() {

	std::cout << "AzureEngineDemo - main()" << std::endl;

	AzureEngine engine{};
	engine.configure();
	engine.startup();

	return ERR::NO_ERROR;
}