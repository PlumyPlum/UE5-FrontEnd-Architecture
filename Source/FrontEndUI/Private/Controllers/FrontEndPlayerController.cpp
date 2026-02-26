// Sean Plumridge All Rights Reserved


#include "Controllers/FrontEndPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "FrontEndSettings/FrontEndGameUserSettings.h"

void AFrontEndPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	TArray<AActor*> FoundCameras;
	UGameplayStatics::GetAllActorsOfClassWithTag(this, ACameraActor::StaticClass(), FName("Default"), FoundCameras);

	if (!FoundCameras.IsEmpty())
	{
		SetViewTarget(FoundCameras[0]);
	}

	UFrontEndGameUserSettings* GameUserSettings = UFrontEndGameUserSettings::Get();

	if (GameUserSettings->GetLastCPUBenchmarkResult() == -1.f || GameUserSettings->GetLastGPUBenchmarkResult() == -1.f)
	{
		GameUserSettings->RunHardwareBenchmark();
		GameUserSettings->ApplyHardwareBenchmarkResults();
		GameUserSettings->SaveSettings();
	}

	if (FrontEndCameraShake && PlayerCameraManager)
	{
		PlayerCameraManager->StartCameraShake(FrontEndCameraShake, 1.0f, ECameraShakePlaySpace::World, FRotator::ZeroRotator);

		UE_LOG(LogTemp, Log, TEXT("Camera shake started."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Camera shake class is not set or PlayerCameraManager is null."));
	}
}
