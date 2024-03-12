#pragma once

#include "CoreMinimal.h"
#include "CameraSequenceSystemPropertyChanged.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "BhvrAssetViewCameraSequence.h"
#include "UObject/NoExportTypes.h"
#include "BhvrAssetViewCameraSequenceSystem.generated.h"

UCLASS(Blueprintable)
class BHVRASSETVIEWER_API ABhvrAssetViewCameraSequenceSystem : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectoryPath SequencesPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCameraSequenceSystemPropertyChanged CameraSequencesChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCameraSequenceSystemPropertyChanged SelectedCameraSequenceChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCameraSequenceSystemPropertyChanged HasActiveSequenceChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCameraSequenceSystemPropertyChanged PlaybackPositionChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBhvrAssetViewCameraSequence> CameraSequences;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString SelectedCameraSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bHasActiveSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 PlaybackPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 MaxPlaybackPosition;

public:
	UFUNCTION(BlueprintCallable)
	void StopSequence();

	UFUNCTION(BlueprintCallable)
	void SetPlaybackPosition(int32 NewPlaybackPosition);

	UFUNCTION(BlueprintCallable)
	void SelectCameraSequence(const FString& DisplayName);

	UFUNCTION(BlueprintCallable)
	void RestartSequence();

	UFUNCTION(BlueprintCallable)
	void PlaySequence();

	UFUNCTION(BlueprintCallable)
	void PauseSequence();

	UFUNCTION(BlueprintCallable)
	void LoadSequences(const TArray<FAssetData>& SequenceAssetDatas);

	UFUNCTION(BlueprintPure)
	bool HasActiveSequence() const;

	UFUNCTION(BlueprintPure)
	FString GetSelectedCameraSequenceName() const;

	UFUNCTION(BlueprintPure)
	int32 GetPlaybackPosition() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaxPlaybackPosition() const;

public:
	ABhvrAssetViewCameraSequenceSystem();
};

FORCEINLINE uint32 GetTypeHash(const ABhvrAssetViewCameraSequenceSystem) { return 0; }
