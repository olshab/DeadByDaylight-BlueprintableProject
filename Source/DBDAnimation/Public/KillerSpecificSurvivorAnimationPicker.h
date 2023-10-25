#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "KillerSpecificSurvivorAnimationPicker.generated.h"

class UAnimInstance;
class UDataTable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UKillerSpecificSurvivorAnimationPicker : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSubclassOf<UAnimInstance> _killerSpecificAnimInstanceClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UDataTable* _killerSpecificSurvivorAnimationDB;

public:
	UKillerSpecificSurvivorAnimationPicker();
};

FORCEINLINE uint32 GetTypeHash(const UKillerSpecificSurvivorAnimationPicker) { return 0; }
