// Fill out your copyright notice in the Description page of Project Settings.


#include "GenMap.h"

// Sets default values
AGenMap::AGenMap()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/VirtualReality/Meshes/Floor"));
	Floor->SetStaticMesh(Mesh);
}

// Called when the game starts or when spawned
void AGenMap::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGenMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AGenMap::MapGenerate() {
	int MaxX = 32;
	int MaxY = 32;
	int TileSize = 400;
	FVector MyVec;

	for (int row = 0; row < MaxX; row++) {
		MyVec.X = TileSize * row;
		for (int col = 0; col < MaxY; col++) {
			MyVec.Y = TileSize * col;
			Floor->AddInstance(FTransform(MyVec));
		}
	}


}