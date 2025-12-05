// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadWidget.generated.h"

/**
 * 
 */
UCLASS()
class BLASTER_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	//virtual void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) override;
	virtual void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld, bool bSessionEnded) override;

public:
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<class UTextBlock> DisplayText;
};
