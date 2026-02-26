// Sean Plumridge All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Options/DataObjects/ListDataObject_Base.h"
#include "ListDataObject_Value.generated.h"

class FOptionsDataInteractionHelper;
/**
 * 
 */
UCLASS(Abstract)
class FRONTENDUI_API UListDataObject_Value : public UListDataObject_Base
{
	GENERATED_BODY()
	
public:
	void SetDataDynamicGetter(const TSharedPtr< FOptionsDataInteractionHelper>& InDynamicGetter);
	void SetDataDynamicSetter(const TSharedPtr< FOptionsDataInteractionHelper>& InDynamicSetter);

	void SetDefaultValueFromString(const FString& InDefaultValue) { DefaultStringValue = InDefaultValue; }
	// Begin UlistDataObject_Base interface
	virtual bool HasDefaultValue() const override { return DefaultStringValue.IsSet(); }
	// End UlistDataObject_Base interface

protected:
	using UListDataObject_Base::OnDataObjectInitialized;

	FString GetDefaultValueAsString() const { return DefaultStringValue.GetValue(); }

	TSharedPtr<FOptionsDataInteractionHelper> DataDynamicGetter;
	TSharedPtr<FOptionsDataInteractionHelper> DataDynamicSetter;

private:
	UPROPERTY(Transient)
	TOptional<FString> DefaultStringValue;

};
