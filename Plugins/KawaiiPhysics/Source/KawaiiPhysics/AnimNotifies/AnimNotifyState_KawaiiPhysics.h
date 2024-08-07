﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "InstancedStruct.h"
#include "AnimNotifyState_KawaiiPhysics.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, meta = (DisplayName = "KawaiiPhyiscs: Add ExternalForce"))
class KAWAIIPHYSICS_API UAnimNotifyState_KawaiiPhysicsAddExternalForce : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	UAnimNotifyState_KawaiiPhysicsAddExternalForce(const FObjectInitializer& ObjectInitializer);

	virtual FString GetNotifyName_Implementation() const override;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,
	                         const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	                       const FAnimNotifyEventReference& EventReference) override;

	UFUNCTION(BlueprintCallable)
	TArray<FKawaiiPhysicsReference> InitAnimNodeReferences(const USkeletalMeshComponent* MeshComp);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExternalForce",
		meta = (BaseStruct = "/Script/KawaiiPhysics.KawaiiPhysics_ExternalForce", ExcludeBaseStruct))
	TArray<FInstancedStruct> AdditionalExternalForces;

#if WITH_EDITOR
	virtual void ValidateAssociatedAssets() override;
#endif
};
