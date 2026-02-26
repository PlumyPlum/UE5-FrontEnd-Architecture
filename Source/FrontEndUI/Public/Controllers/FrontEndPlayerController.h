// Sean Plumridge All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FrontEndPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FRONTENDUI_API AFrontEndPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	// Begin APlayerController Interface
	virtual void OnPossess(APawn* aPawn) override;
	// End APlayerController Interface

private:
	UPROPERTY(EditAnywhere, Category = "Camera")
	TSubclassOf<UCameraShakeBase> FrontEndCameraShake;
};
