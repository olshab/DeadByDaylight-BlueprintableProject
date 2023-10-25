#pragma once

#include "CoreMinimal.h"
#include "StruggleSkillCheck.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "StruggleComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UStruggleComponent : public UActorComponent, public IStruggleSkillCheck
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _skillCheckCount;

private:
	UFUNCTION(BlueprintCallable)
	void OnSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void Authority_TryActivateSkillCheck();

public:
	UStruggleComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStruggleComponent) { return 0; }
