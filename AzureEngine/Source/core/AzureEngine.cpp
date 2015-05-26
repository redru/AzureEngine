#include "const\ErrorCodes.h"
#include "core\AzureEngine.h"

#include <iostream>

AzureEngine::AzureEngine() {
	std::cout << "AzureEngine - Creation." << std::endl;

	core = new Core{};
	mTime = new TimeModule{};
	mMaths = new MathsModule{};
	mPhysics = new PhysicsModule{};
	mRendering = new RenderingModule{};
}

int AzureEngine::configure() {
	std::cout << "AzureEngine - Configuration." << std::endl;
	core->configure();

	return ERR::NO_ERROR;
}

int AzureEngine::startup() {
	std::cout << "AzureEngine - Startup." << std::endl;
	core->startup();
	
	return ERR::NO_ERROR;
}

int AzureEngine::shutdown() {
	std::cout << "AzureEngine - Shutdown." << std::endl;
	core->shutdown();
	
	return ERR::NO_ERROR;
}