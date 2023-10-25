#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "OfferingRevealDelays.h"
#include "OfferingSequenceAssets.generated.h"

class AOfferingCard;
class UOfferingCardAnim;

UCLASS(Blueprintable)
class AOfferingSequenceAssets : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpaceBetweenCards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AOfferingCard> DefaultCardClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UOfferingCardAnim> DefaultCardAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOfferingRevealDelays> OfferingRevealDelays;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* CardsParent;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlaySmoke();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayFadeOut();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayFadeIn();

public:
	AOfferingSequenceAssets();
};

FORCEINLINE uint32 GetTypeHash(const AOfferingSequenceAssets) { return 0; }
