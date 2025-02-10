// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Health.h"
#include "ArmouredHealth.generated.h"

/**
 * here is the armoured health
 * You will need add some variables 
 * Give it a go
 */
UCLASS()
class HEALTHDEMO_API UArmouredHealth : public UHealth
{
	GENERATED_BODY()

private:
	//variable for the armor
	UPROPERTY(VisibleAnywhere, Category="MaxArmorHealth")
	int MaxArmorHealth = 50;
	UPROPERTY(VisibleAnywhere, Category = "ArmorHealth")
	int ArmorHealth;

	public:
		//resetting amour whem game start
		UArmouredHealth();
		// notice i have to say this is an override
		void TakeDamage(int Damage) override;
};
