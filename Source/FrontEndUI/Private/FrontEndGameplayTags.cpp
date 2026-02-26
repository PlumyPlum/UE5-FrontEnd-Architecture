// Sean Plumridge All Rights Reserved


#include "FrontEndGameplayTags.h"

namespace FrontEndGameplayTags
{
	// Frontend Widget Stack
	UE_DEFINE_GAMEPLAY_TAG(FrontEnd_WidgetStack_Modal, "FrontEnd.WidgetStack.Modal");
	UE_DEFINE_GAMEPLAY_TAG(FrontEnd_WidgetStack_GameMenu, "FrontEnd.WidgetStack.GameMenu")
	UE_DEFINE_GAMEPLAY_TAG(FrontEnd_WidgetStack_GameHUD, "FrontEnd.WidgetStack.GameHUD");
	UE_DEFINE_GAMEPLAY_TAG(FrontEnd_WidgetStack_FrontEnd, "FrontEnd.WidgetStack.FrontEnd");

	// Frontend Widget
	UE_DEFINE_GAMEPLAY_TAG(FrontEnd_Widget_PressAnyKeyScreen, "FrontEnd.Widget.PressAnyKeyScreen");
	UE_DEFINE_GAMEPLAY_TAG(FrontEnd_Widget_MainMenuScreen, "FrontEnd.Widget.MainMenuScreen");
	UE_DEFINE_GAMEPLAY_TAG(FrontEnd_Widget_ConfirmScreen, "FrontEnd.Widget.ConfirmScreen");
	UE_DEFINE_GAMEPLAY_TAG(FrontEnd_Widget_OptionsScreen, "FrontEnd.Widget.OptionsScreen");

	// FrontEnd Options Widget
	UE_DEFINE_GAMEPLAY_TAG(FrontEnd_Image_TestImage, "FrontEnd.Image.TestImage");

}
