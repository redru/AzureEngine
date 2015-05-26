#pragma once

#include "Core.h"
#include "time\TimeModule.h"
#include "maths\MathsModule.h"
#include "physics\PhysicsModule.h"
#include "rendering\RenderingModule.h"

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
	Core* core;
	TimeModule* mTime;
	MathsModule* mMaths;
	PhysicsModule* mPhysics;
	RenderingModule* mRendering;

};