// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RecoveryItem.h"
#include "RecoveryHp.generated.h"

/**
 * 
 */
UCLASS()
class ANTIGRAVITY_API ARecoveryHp : public ARecoveryItem
{
	GENERATED_BODY()
	
public:
	//コンストラクタ
	ARecoveryHp();

	virtual void BeginPlay() override;

	//毎フレームの更新処理
	virtual void Tick(float DeltaTime) override;

private:
	void OnOverlapRecovery(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)override;

	void OnOverlapRecoveryEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)override;
};
