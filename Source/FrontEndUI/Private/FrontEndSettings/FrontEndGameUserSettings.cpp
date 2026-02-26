// Sean Plumridge All Rights Reserved


#include "FrontEndSettings/FrontEndGameUserSettings.h"

UFrontEndGameUserSettings::UFrontEndGameUserSettings()
	: OverallVolume(1.f)
	, MusicVolume(1.f)
	, SoundFXVolume(1.f)
	, bAllowBackgroundAudio(false)
	, bUseHDRAudioMode(false)
{
}

UFrontEndGameUserSettings* UFrontEndGameUserSettings::Get()
{
	if (GEngine)
	{
		return CastChecked<UFrontEndGameUserSettings>(GEngine->GetGameUserSettings());
	}

	return nullptr;
}

void UFrontEndGameUserSettings::SetOverallVolume(float InVolume)
{
	OverallVolume = InVolume;

	// The actual logic for controlling the volume goes here
}

void UFrontEndGameUserSettings::SetMusicVolume(float InVolume)
{
	MusicVolume = InVolume;
}

void UFrontEndGameUserSettings::SetSoundFXVolume(float InVolume)
{
	SoundFXVolume = InVolume;
}

void UFrontEndGameUserSettings::SetAllowBackgroundAudio(bool bIsAllowed)
{
	bAllowBackgroundAudio = bIsAllowed;
}

void UFrontEndGameUserSettings::SetUseHDRAudioMode(bool bIsAllowed)
{
	bUseHDRAudioMode = bIsAllowed;
}

float UFrontEndGameUserSettings::GetCurrentDisplayGamma() const
{
	if (GEngine)
	{
		return GEngine->GetDisplayGamma();
	}

	return 0.0f;
}

void UFrontEndGameUserSettings::SetCurrentDisplayGamma(float InNewGamma)
{
	if (GEngine)
	{
		GEngine->DisplayGamma = InNewGamma;
	}
}
