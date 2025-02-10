// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmouredHealth.h"

/**
* Here is the CPP file where we will put our logic
* A slight hint to help you is 
* UHealth::Damage will call the base class (UHealths) damage funtion not the Armoured Health Damage
* 
*/
UArmouredHealth::UArmouredHealth()
{
	ArmorHealth = MaxArmorHealth;
}
void UArmouredHealth::TakeDamage(int Damage)
{
	UE_LOG(LogTemp, Warning, TEXT("Armoured Health took no damage! you might want to change that"));
	if (ArmorHealth > 0)
	{
		ArmorHealth -= Damage;
		UE_LOG(LogTemp, Warning, TEXT("Armour take damage successfully"));
	}
	if (ArmorHealth <= 0) 
	{
		Super::TakeDamage(Damage);
	}
}
