// HammUEr
// (c) 2015-2019 Turfster / NT Entertainment

#include "HammUErInterfaces.h"

UHammuerLogicInterface::UHammuerLogicInterface(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool IHammuerLogicInterface::IsHammUErLogic()
{
	return true;
}

FString IHammuerLogicInterface::GetFriendlyName()
{
	return "undefined";
}