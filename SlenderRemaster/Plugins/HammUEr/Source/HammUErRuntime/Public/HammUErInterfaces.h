// HammUEr
// (c) 2015-2019 Turfster / NT Entertainment

#pragma once
#include "CoreMinimal.h"
#include "UObject/interface.h"
#include "HammUErInterfaces.generated.h"


UINTERFACE(MinimalAPI)
class UHammuerLogicInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IHammuerLogicInterface
{
	GENERATED_IINTERFACE_BODY()
public:
	virtual bool IsHammUErLogic();
	virtual FString GetFriendlyName();
};