#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TotemBoundPerk.h"
#include "BoonPerk.generated.h"

class UBlessedStatusEffect;
class ACamperPlayer;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBoonPerk : public UTotemBoundPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UBlessedStatusEffect> _blessedStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UBlessedStatusEffect* _blessedStatusEffect;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);

public:
	UBoonPerk();
};

FORCEINLINE uint32 GetTypeHash(const UBoonPerk) { return 0; }
