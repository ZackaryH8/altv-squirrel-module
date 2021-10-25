#pragma once

#include <SDK.h>
#include <simplesquirrel.hpp>

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