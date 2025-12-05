// Fill out your copyright notice in the Description page of Project Settings.


#include "OverheadWidget.h"

void UOverheadWidget::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld)
{
	// 뷰포인트에서 제거
	RemoveFromParent();
	Super::OnLevelRemovedFromWorld(InLevel, InWorld);

}
