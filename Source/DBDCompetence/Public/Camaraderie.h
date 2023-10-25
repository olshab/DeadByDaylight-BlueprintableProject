#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Camaraderie.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UCamaraderie : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _percentUseItem;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _pauseTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _camaraderieNotificationEffectClass;

public:
	UCamaraderie();
};

FORCEINLINE uint32 GetTypeHash(const UCamaraderie) { return 0; }
