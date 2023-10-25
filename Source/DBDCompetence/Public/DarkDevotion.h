#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "DarkDevotion.generated.h"

class UTerrorRadiusEmitterComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDarkDevotion : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTerrorRadiusEmitterComponent* _obsessionTerrorRadiusEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _obsessionTerrorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _simulatedFixedDistance;

public:
	UDarkDevotion();
};

FORCEINLINE uint32 GetTypeHash(const UDarkDevotion) { return 0; }
