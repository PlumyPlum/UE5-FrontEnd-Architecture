// Sean Plumridge All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FrontEndTypes/FrontEndEnumTypes.h"
#include "FrontEndUISubsystem.generated.h"

class UWidget_PrimraryLayout;
struct FGameplayTag;
class UWidget_ActivatableBase;
class UFrontEndCommonButtonBase;

enum class EAsyncPushWidgetState : uint8
{
	OnCreatedBeforePush,
	AfterPush
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnButtonDescriptionTextUpdatedDelegate, UFrontEndCommonButtonBase*, BroadcastingButton, FText, DescriptionText);

/**
 * 
 */
UCLASS()
class FRONTENDUI_API UFrontEndUISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	

public:
	static UFrontEndUISubsystem* Get(const UObject* WorldContextObject);

	// Begin USubsytem Interface
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	// End USubsytem Interface

	UFUNCTION(BlueprintCallable)
	void RegisterCreatedPrimraryLayoutWidget(UWidget_PrimraryLayout* InCreatedWidget);

	void PushSoftWidgetToStackAsync(const FGameplayTag& InWidgetStackTag, TSoftClassPtr<UWidget_ActivatableBase> InSoftWidgetClass, TFunction<void(EAsyncPushWidgetState, UWidget_ActivatableBase*)> AsyncPushStateCallback);
	void PushConfirmScreenToModalStackAsync(EConfirmScreenType InScreenType, const FText& InScreenTitle, const FText& InScreenMessage, TFunction<void(EConfirmScreenButtonType)> ButtonClickedCallback);


	UPROPERTY(BlueprintAssignable)
	FOnButtonDescriptionTextUpdatedDelegate OnButtonDescriptionTextUpdated;

private:
	UPROPERTY(Transient)
	UWidget_PrimraryLayout* CreatedPrimraryLayout;
};
