// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RandBluePrintLib.generated.h"

/**
 * 
 */
UCLASS()
class TUTO_API URandBluePrintLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		static float RandNumberFromZero(const float max);
};
