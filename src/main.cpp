#include "main.h"
#include "runtime.h"

#include <iostream>

EXPORT bool altMain(alt::ICore* core)
{
	alt::ICore::SetInstance(core);

	// Create instance of runtime and register
	auto& runtime = SquirrelRuntime::Instance();
	core->RegisterScriptRuntime(MODULE_TYPE, &runtime);
	std::cout << "Loaded Squirrel module" << std::endl;

	return true;
}