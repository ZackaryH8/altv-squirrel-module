#include "runtime.h"

SquirrelRuntime::SquirrelRuntime()
{
	vm = new ssq::VM(1024);

}

alt::IResource::Impl* SquirrelRuntime::CreateImpl(alt::IResource* resource)
{
	return nullptr;
}

void SquirrelRuntime::DestroyImpl(alt::IResource::Impl* impl)
{

}
