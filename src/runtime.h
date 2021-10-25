#pragma once

#include <alt-sdk/SDK.h>
#include <simplesquirrel/simplesquirrel.hpp>

class SquirrelRuntime : public alt::IScriptRuntime
{
	ssq::VM* vm;

 public:
	SquirrelRuntime();

	alt::IResource::Impl* CreateImpl(alt::IResource* resource) override;
	void DestroyImpl(alt::IResource::Impl* impl) override;


	static SquirrelRuntime& Instance()
	{
		static SquirrelRuntime _instance;
		return _instance;
	}
};