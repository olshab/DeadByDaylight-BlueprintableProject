#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MontageInstanceInfo.h"
#include "MontageStartedDelegate.h"
#include "MontageEndedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "ContextualAnimationMapping.h"
#include "MontageBlendingOutDelegate.h"
#include "AnimationMontageDescriptor.h"
#include "MontagePlayer.generated.h"

class UAnimMontage;
class UDataTable;
class USkeletalMeshComponent;
class UAnimInstance;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMontagePlayer : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FMontageStartedDelegate OnMontageStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FMontageEndedDelegate OnMontageEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FMontageBlendingOutDelegate BPOnMontageBlendingOut;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* _animationMappingsTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* _playerSpecificMappingsTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FContextualAnimationMapping> _contextualAnimationMappings;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAnimMontage* _currentlyPlayingMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FMontageInstanceInfo> _activeMontagesInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FName _outSectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _timeBeforeOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _skeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UAnimMontage*, FName> _montageToNameMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UDataTable*> _loadedMappingTables;

public:
	UFUNCTION(BlueprintCallable)
	void Stop(float blendOutTime);

private:
	UFUNCTION(BlueprintCallable)
	void SignalAnimInstanceChanged();

public:
	UFUNCTION(BlueprintCallable)
	void SetSkeletalMesh(USkeletalMeshComponent* skeletalMeshComponent);

	UFUNCTION(BlueprintCallable)
	void SetPlayRate(float playRate);

	UFUNCTION(BlueprintCallable)
	UAnimMontage* PlayLoopForDuration(FAnimationMontageDescriptor animMontageID, float duration, float playRate, FName out);

	UFUNCTION(BlueprintCallable)
	UAnimMontage* Play(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower);

private:
	UFUNCTION()
	void OnMontageEndedInternal(FGuid guid, UAnimMontage* montage, bool interrupted);

	UFUNCTION()
	void OnMontageBlendingOutInternal(FGuid guid, UAnimMontage* montage, bool interrupted);

public:
	UFUNCTION(BlueprintCallable)
	void JumpToSectionEnd(FName sectionName);

	UFUNCTION(BlueprintCallable)
	void JumpToSection(FName sectionName);

	UFUNCTION(BlueprintPure)
	bool IsPlayingAnyMontage() const;

	UFUNCTION(BlueprintPure)
	bool IsPlaying(FAnimationMontageDescriptor montageDescriptor) const;

	UFUNCTION(BlueprintPure)
	UAnimInstance* GetAnimInstance() const;

public:
	UMontagePlayer();
};

FORCEINLINE uint32 GetTypeHash(const UMontagePlayer) { return 0; }
