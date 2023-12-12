// Fill out your copyright notice in the Description page of Project Settings.


#include "GameUserSettings/WJGameUserSettings.h"

void UWJGameUserSettings::SetTTSEnabled(bool bIsEnabled)
{
	bIsTTSEnabled = bIsEnabled;
	SaveConfig();
}

bool UWJGameUserSettings::IsTTSEnabled() const
{
	return bIsTTSEnabled;
}

UWJGameUserSettings* UWJGameUserSettings::GetWJGameUserSettings()
{
	return Cast<UWJGameUserSettings>(GEngine->GetGameUserSettings());
}
