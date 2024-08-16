// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Cy_DataAsset_Base.generated.h"

/**
 * 
 */
UCLASS(Blueprintable , meta = (ShowWorldContextPin))
class CY_DATAASSET_API UCy_DataAsset_Base : public UDataAsset
{
	GENERATED_BODY()

public:

	virtual bool ImplementsGetWorld() const;
	
};
