// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class FIRSTPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Damage")
	int32 i32;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Damage")
	float f;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient,Category="Damage")
	FString fstr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool b;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
