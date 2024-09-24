// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FarmUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class LANDSCAPETEST_API UFarmUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FarmWidget")
	float Health{100.f};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FarmWidget")
	float MaxHealth{ 100.f };
};
