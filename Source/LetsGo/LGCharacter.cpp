// Fill out your copyright notice in the Description page of Project Settings.


#include "LGCharacter.h"

// Sets default values
ALGCharacter::ALGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

