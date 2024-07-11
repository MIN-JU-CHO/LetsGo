// Fill out your copyright notice in the Description page of Project Settings.


#include "MinjuCho.h"

// Sets default values
AMinjuCho::AMinjuCho()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMinjuCho::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("I won GameJam in 2023."))
	UE_LOG(LogTemp, Warning, TEXT("I will win GameJam in 2024."))
	
}

// Called every frame
void AMinjuCho::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

