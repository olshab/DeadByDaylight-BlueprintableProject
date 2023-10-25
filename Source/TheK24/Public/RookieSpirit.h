#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "RookieSpirit.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class URookieSpirit : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_NumberOfGreatSkillChecksOnGeneratorRepair, Transient, meta=(AllowPrivateAccess=true))
	int32 _numberOfGreatSkillChecksOnGeneratorRepair;

	UPROPERTY(EditAnywhere)
	int32 _numberOfGeneratorRepairGreatSkillChecksRequired;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_NumberOfGreatSkillChecksOnGeneratorRepair();

	UFUNCTION(BlueprintCallable)
	void HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URookieSpirit();
};

FORCEINLINE uint32 GetTypeHash(const URookieSpirit) { return 0; }
