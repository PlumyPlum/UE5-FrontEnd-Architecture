// Sean Plumridge All Rights Reserved


#include "FrontEndFunctionLibrary.h"
#include "FrontEndSettings/FrontEndDeveloperSettings.h"

TSoftClassPtr<UWidget_ActivatableBase> UFrontEndFunctionLibrary::GetFrontEndSoftWidgetClassByTag(UPARAM(meta = (Categories = "FrontEnd.Widget")) FGameplayTag InWidgetTag)
{
	const UFrontEndDeveloperSettings* FrontEndDeveloperSettings = GetDefault<UFrontEndDeveloperSettings>();

	checkf(FrontEndDeveloperSettings->FrontEndWidgetMap.Contains(InWidgetTag), TEXT("Could not find the corresponding widget under the tag %s"), *InWidgetTag.ToString());

	return FrontEndDeveloperSettings->FrontEndWidgetMap.FindRef(InWidgetTag);
}

TSoftObjectPtr<UTexture2D> UFrontEndFunctionLibrary::GetOptionsSoftImageByTag(FGameplayTag InImageTag)
{
	const UFrontEndDeveloperSettings* FrontEndDeveloperSettings = GetDefault<UFrontEndDeveloperSettings>();

	checkf(FrontEndDeveloperSettings->OptionsScreenSoftImageMap.Contains(InImageTag), TEXT("Could not find an image associated with the tag %s"), *InImageTag.ToString());

	return FrontEndDeveloperSettings->OptionsScreenSoftImageMap.FindRef(InImageTag);
}