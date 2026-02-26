// Sean Plumridge All Rights Reserved

#pragma once

#include "NativeGameplayTags.h"

namespace FrontEndGameplayTags
{
	// FrontEnd Widget Stack
	FRONTENDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FrontEnd_WidgetStack_Modal);
	FRONTENDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FrontEnd_WidgetStack_GameMenu);
	FRONTENDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FrontEnd_WidgetStack_GameHUD);
	FRONTENDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FrontEnd_WidgetStack_FrontEnd);

	// FrontEnd Widget
	FRONTENDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FrontEnd_Widget_PressAnyKeyScreen);
	FRONTENDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FrontEnd_Widget_MainMenuScreen);
	FRONTENDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FrontEnd_Widget_ConfirmScreen);
	FRONTENDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FrontEnd_Widget_OptionsScreen);

	// FrontEnd Options Widget
	FRONTENDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FrontEnd_Image_TestImage);
}