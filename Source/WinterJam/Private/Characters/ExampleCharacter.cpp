// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/ExampleCharacter.h"

// Sets default values
AExampleCharacter::AExampleCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExampleCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExampleCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AExampleCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

