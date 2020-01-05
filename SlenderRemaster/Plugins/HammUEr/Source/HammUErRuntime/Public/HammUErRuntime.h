// HammUEr
// (c) 2015-2019 Turfster / NT Entertainment

#pragma once

#include "Modules/ModuleManager.h"

class FHammUErRuntimeModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};