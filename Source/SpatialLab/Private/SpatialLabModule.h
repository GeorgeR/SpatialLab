#pragma once

#include "CoreMinimal.h"

#include "ISpatialLabModuleInterface.h"

class FSpatialLabModule
	: public ISpatialLabModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
