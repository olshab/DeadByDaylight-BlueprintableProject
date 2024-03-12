#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SpecialEventVFXHelperComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API USpecialEventVFXHelperComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLocallyObservedChangedDelegate);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHideVignetteTagAddedOrRemovedDelegate, bool, added);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHideVfxTagAddedOrRemovedDelegate, bool, added);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FHideVfxTagAddedOrRemovedDelegate OnHideVFXTagAddedOrRemoved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FHideVignetteTagAddedOrRemovedDelegate OnHideVignetteTagAddedOrRemoved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FLocallyObservedChangedDelegate OnLocallyObservedChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _hideVFXTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _killerOnlyHideVFXTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _survivorOnlyHideVFXTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _hideVignetteTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UActorComponent>> _componentsToSpawnOnHusk;

public:
	UFUNCTION(BlueprintCallable)
	void RegisterListeners();

public:
	USpecialEventVFXHelperComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpecialEventVFXHelperComponent) { return 0; }
