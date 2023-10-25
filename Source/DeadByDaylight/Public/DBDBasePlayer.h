#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AnimTagProvider.h"
#include "AnimationMontageDescriptor.h"
#include "OnCustomizationChanged.h"
#include "UObject/NoExportTypes.h"
#include "MontagePlaybackDefinition.h"
#include "GameplayTagContainer.h"
#include "Chaos/ChaosEngineInterface.h"
#include "DBDBasePlayer.generated.h"

class UMontagePlayer;
class UAkComponent;
class UCustomizedSkeletalMesh;
class UBaseGroundDetectorComponent;
class UAnimMontage;
class UCustomizedAudioComponent;
class UAnimInstance;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDBasePlayer : public ACharacter, public IAnimTagProvider
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCustomizationChanged OnCustomizationChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _semanticGameplayTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBaseGroundDetectorComponent* _leftFootGroundDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBaseGroundDetectorComponent* _rightFootGroundDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBaseGroundDetectorComponent* _leftFrontFootGroundDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBaseGroundDetectorComponent* _rightFrontFootGroundDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMontagePlayer* _montagePlayer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _characterIndex;

public:
	UFUNCTION(BlueprintCallable)
	bool TeleportWithClothHandling(const FVector& location, const FRotator& rotation, bool checkCollisions);

	UFUNCTION(BlueprintCallable)
	void StopMontage();

	UFUNCTION(BlueprintCallable)
	UAnimMontage* PlayMontage(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower);

protected:
	UFUNCTION(BlueprintCallable)
	void OnCurrentMontageComplete(UAnimMontage* MontageAsset, bool interrupted);

private:
	UFUNCTION(BlueprintCallable)
	void OnCurrentMontageBlendingOut(UAnimMontage* MontageAsset, bool interrupted);

	UFUNCTION(BlueprintCallable)
	void OnAnimInstanceChanged();

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SwapCosmetics(FName cosmeticId);

public:
	UFUNCTION(BlueprintPure)
	bool IsPlayingMontage(FAnimationMontageDescriptor animMontageID) const;

	UFUNCTION(BlueprintPure)
	bool IsPlayingAnyMontage() const;

	UFUNCTION(BlueprintPure)
	bool GetShowBlindDebugInfo() const;

	UFUNCTION(BlueprintPure)
	FGameplayTagContainer GetSemanticTag() const;

	UFUNCTION(BlueprintPure)
	TEnumAsByte<EPhysicalSurface> GetRightFrontFootSurfaceType() const;

	UFUNCTION(BlueprintPure)
	FString GetRightFrontFootAudioSurfaceName() const;

	UFUNCTION(BlueprintPure)
	TEnumAsByte<EPhysicalSurface> GetRightFootSurfaceType() const;

	UFUNCTION(BlueprintPure)
	FString GetRightFootAudioSurfaceName() const;

	UFUNCTION(BlueprintPure)
	UMontagePlayer* GetMontagePlayer() const;

	UFUNCTION(BlueprintPure)
	FMontagePlaybackDefinition GetMontagePlaybackDefinition(FAnimationMontageDescriptor animMontageID, float playRate, bool isFollower) const;

	UFUNCTION(BlueprintPure)
	float GetMontageLength(FAnimationMontageDescriptor animMontageID) const;

	UFUNCTION(BlueprintPure)
	UAnimMontage* GetMontage(FAnimationMontageDescriptor animMontageID) const;

	UFUNCTION(BlueprintPure)
	TEnumAsByte<EPhysicalSurface> GetLeftFrontFootSurfaceType() const;

	UFUNCTION(BlueprintPure)
	FString GetLeftFrontFootAudioSurfaceName() const;

	UFUNCTION(BlueprintPure)
	TEnumAsByte<EPhysicalSurface> GetLeftFootSurfaceType() const;

	UFUNCTION(BlueprintPure)
	FString GetLeftFootAudioSurfaceName() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh() const;

	UFUNCTION(BlueprintPure)
	UCustomizedAudioComponent* GetCustomizedAudio() const;

	UFUNCTION(BlueprintPure)
	FName GetCharacterName() const;

	UFUNCTION(BlueprintPure)
	int32 GetCharacterIndex() const;

	UFUNCTION(BlueprintPure)
	UAkComponent* GetAudioComponent() const;

	UFUNCTION(BlueprintPure)
	void GetAnimTags(TArray<FName>& outTags) const;

	UFUNCTION(BlueprintPure)
	UAnimInstance* GetAnimInstance() const;

protected:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SwapCosmetics(FName cosmeticId);

public:
	ADBDBasePlayer();
};

FORCEINLINE uint32 GetTypeHash(const ADBDBasePlayer) { return 0; }
