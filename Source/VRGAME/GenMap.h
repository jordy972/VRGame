// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "GenMap.generated.h"


UCLASS()
class VRGAME_API AGenMap : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGenMap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void MapGenerate();

	UInstancedStaticMeshComponent * Floor;

};
