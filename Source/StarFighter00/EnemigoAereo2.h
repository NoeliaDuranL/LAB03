// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "EnemigoAereo2.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER00_API AEnemigoAereo2 : public ANaveAerea
{
	GENERATED_BODY()

public:
	AEnemigoAereo2();
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere)
		float SpeedScale;
	float RunningTime;
};
