// Sean Plumridge All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Widget_ActivatableBase.generated.h"

class AFrontEndPlayerController;

/**
 * 
 */
UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class FRONTENDUI_API UWidget_ActivatableBase : public UCommonActivatableWidget
{
	GENERATED_BODY()
	
private:
	TWeakObjectPtr<AFrontEndPlayerController> CachedOwningFrontEndPC;

protected:
	UFUNCTION(BlueprintPure)
	AFrontEndPlayerController* GetOwningFrontEndPlayerController();
};
