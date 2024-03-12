#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CameraShot.h"
#include "ProceduralCameraRaD.generated.h"

class UCameraComponent;
class AActor;

UCLASS(Blueprintable)
class DBDPROCEDURALCAMERA_API AProceduralCameraRaD : public APawn
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCameraShot> Shots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumCinematicLengthWanted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CinematicTotalLength;

public:
	UFUNCTION(BlueprintCallable)
	void SelectTracks();

private:
	UFUNCTION(BlueprintCallable)
	void PlayCinematic();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCameraTransition(float TransitionDuration, float BeginAt);

private:
	UFUNCTION(BlueprintCallable)
	void ComputeTrackObstructionScore(FCameraShot& CameraShot);

public:
	UFUNCTION(BlueprintCallable)
	void BeginCinematic();

public:
	AProceduralCameraRaD();
};

FORCEINLINE uint32 GetTypeHash(const AProceduralCameraRaD) { return 0; }
