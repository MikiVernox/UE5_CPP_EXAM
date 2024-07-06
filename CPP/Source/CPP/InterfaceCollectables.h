// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterfaceCollectables.generated.h"


UINTERFACE(MinimalAPI)
class UInterfaceCollectables : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CPP_API IInterfaceCollectables
{
	GENERATED_BODY()

	
public:
	virtual void OnCollected();
};
