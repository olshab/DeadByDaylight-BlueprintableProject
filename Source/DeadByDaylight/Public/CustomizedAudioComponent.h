#pragma once

#include "CoreMinimal.h"
#include "CustomizedAudioChangedDelegate.h"
#include "Components/ActorComponent.h"
#include "EAudioCustomizationCategory.h"
#include "CustomizedAudioComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCustomizedAudioComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOutfitCustomizedAudioChangedDelegate, const FName&, outfitAudioStateCollection);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCustomizedAudioChangedDelegate OnCustomizedAudioSwitchStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOutfitCustomizedAudioChangedDelegate OnOutfitCustomizedAudioStateCollectionChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AudioCharacterNameDefaultSwitchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AudioCharacterSubNameDefaultSwitchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AudioCharacterHeadDefaultSwitchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AudioCharacterClothesDefaultSwitchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AudioCharacterShoesDefaultSwitchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AudioCharacterWeaponDefaultSwitchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AudioCharacterAmbianceDefaultSwitchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString AudioCharacterStateDefaultSwitchState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName AudioCharacterDefaultOutfitCollectionState;

public:
	UFUNCTION(BlueprintPure)
	FName GetOutfitCustomizedAudioCollectionState() const;

	UFUNCTION(BlueprintPure)
	FString GetAudioSwitchState(EAudioCustomizationCategory audioCustomizationCategory) const;

public:
	UCustomizedAudioComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizedAudioComponent) { return 0; }
