// Sean Plumridge All Rights Reserved


#include "Widgets/Widget_PrimraryLayout.h"

#include "FrontEndDebugHelper.h"

UCommonActivatableWidgetContainerBase* UWidget_PrimraryLayout::FindWidgetStackByTag(const FGameplayTag& InTag) const
{
	checkf(RegisteredWidgetStackMap.Contains(InTag), TEXT("Can not find the widget stack by the tag %s"), *InTag.ToString());

	return RegisteredWidgetStackMap.FindRef(InTag);
}

void UWidget_PrimraryLayout::RegisterWidgetStack(UPARAM(meta = (Categories = "FrontEnd.WidgetStack")) FGameplayTag InStackTag, UCommonActivatableWidgetContainerBase* InStack)
{
	if (!IsDesignTime())
	{
		if (!RegisteredWidgetStackMap.Contains(InStackTag))
		{
			RegisteredWidgetStackMap.Add(InStackTag, InStack);
		}
	}
}
