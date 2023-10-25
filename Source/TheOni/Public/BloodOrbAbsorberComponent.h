#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BloodOrbIsAbsorbingChangedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "BloodOrbAbsorbedDelegate.h"
#include "BloodOrbAbsorberComponent.generated.h"

class UBloodOrbDropperComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEONI_API UBloodOrbAbsorberComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FBloodOrbAbsorbedDelegate Authority_OnBloodOrbAbsorbed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FBloodOrbIsAbsorbingChangedDelegate OnIsAbsorbingChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AbsorbLocationOffset;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UBloodOrbDropperComponent*> _camperBloodOrbDropperComponents;

public:
	UFUNCTION(BlueprintCallable)
	void SetInAbsorbMode(const bool inAbsorptionMode);

	UFUNCTION(BlueprintPure)
	bool IsInAbsorbMode() const;

public:
	UBloodOrbAbsorberComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbAbsorberComponent) { return 0; }
