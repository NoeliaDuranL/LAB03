// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "EnemigoAereo1.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER00_API AEnemigoAereo1 : public ANaveAerea
{
	GENERATED_BODY()
public:
	AEnemigoAereo1();
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere)
		float SpeedScale;
	float RunningTime;
};
