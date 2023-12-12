// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "WJGameUserSettings.generated.h"

UCLASS()
class WINTERJAM_API UWJGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Settings")
	void SetTTSEnabled(bool bIsEnabled);

	UFUNCTION(BlueprintCallable, Category = "Settings")
	bool IsTTSEnabled() const;

	UFUNCTION(BlueprintCallable, Category = "Settings")
	static UWJGameUserSettings* GetWJGameUserSettings();

protected:
	UPROPERTY(Config)
	bool bIsTTSEnabled = true;
	
};
