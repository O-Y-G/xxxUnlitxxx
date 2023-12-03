// Copyright Epic Games, Inc. All Rights Reserved.

#include "xxxUnlitxxxBPLibrary.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"

void UxxxUnlitxxxBPLibrary::ApplyUnlitViewMode()
{
    const EViewModeIndex DesiredViewMode = VMI_Unlit;
    UGameViewportClient* ViewportClient = GEngine->GameViewport;
    ViewportClient->ViewModeIndex = static_cast<int32>(DesiredViewMode);

    UE_LOG(LogTemp, Warning, TEXT("***************** ApplyView: %s ***********************"), *UEnum::GetValueAsString(DesiredViewMode));
}

void UxxxUnlitxxxBPLibrary::ApplyLitViewMode()
{
    const EViewModeIndex DesiredViewMode = VMI_Lit;
    UGameViewportClient* ViewportClient = GEngine->GameViewport;
    ViewportClient->ViewModeIndex = static_cast<int32>(DesiredViewMode);

    UE_LOG(LogTemp, Warning, TEXT("***************** ApplyView: %s ***********************"), *UEnum::GetValueAsString(DesiredViewMode));
}

