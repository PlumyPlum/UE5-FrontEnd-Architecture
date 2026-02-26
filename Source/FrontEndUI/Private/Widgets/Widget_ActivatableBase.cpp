// Sean Plumridge All Rights Reserved


#include "Widgets/Widget_ActivatableBase.h"
#include "Controllers/FrontEndPlayerController.h"

AFrontEndPlayerController* UWidget_ActivatableBase::GetOwningFrontEndPlayerController()
{
    if (!CachedOwningFrontEndPC.IsValid())
    {
        CachedOwningFrontEndPC = GetOwningPlayer<AFrontEndPlayerController>();
    }

    return CachedOwningFrontEndPC.IsValid() ? CachedOwningFrontEndPC.Get() : nullptr;
}
