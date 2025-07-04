// KawaiiPhysics : Copyright (c) 2019-2024 pafuhana1213, MIT License

#pragma once

#include "Modules/ModuleInterface.h"
#include "Logging/LogMacros.h"

DECLARE_LOG_CATEGORY_EXTERN(LogKawaiiPhysics, Log, All);

class FKawaiiPhysicsModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
