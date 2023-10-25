#pragma once

#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "UObject/SoftObjectPtr.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DisplayStand.generated.h"

class ACharm;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADisplayStand : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* _currentActorDisplayed;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UClass* _currentActorDisplayedClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UClass* _nextActorToDisplayClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<UClass*, FTransform> _offsetByClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<UClass*, bool> _enableRotationByClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<ACharm> _defaultCharmClassDisplayable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _useOffsetMenuAnimations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _displayDummyCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCharacterDropdown _characterDropdown;

private:
	UFUNCTION(BlueprintCallable)
	void OnCurrentActorDestroyed(AActor* destroyedActor);

public:
	UFUNCTION(BlueprintCallable)
	void BlockRotation(bool shouldBlockRotation);

public:
	ADisplayStand();
};

FORCEINLINE uint32 GetTypeHash(const ADisplayStand) { return 0; }
