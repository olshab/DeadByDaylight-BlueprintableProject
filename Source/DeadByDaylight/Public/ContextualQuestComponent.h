#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpecialBehaviourObjectsInfo.h"
#include "ContextualQuestComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UContextualQuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpecialBehaviourSet, ADBDPlayer*, dbdPlayer);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SpecialBehaviourObjectsInfo, Transient, meta=(AllowPrivateAccess=true))
	TArray<FSpecialBehaviourObjectsInfo> _specialBehaviourObjectsInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isInitialized;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SpecialBehaviourObjectsInfo();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_DebugRemoveSpecialBehaviour(FName id);

	UFUNCTION(BlueprintCallable)
	void Authority_DebugAddSpecialBehaviour(FName id, int32 amountRequired);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UContextualQuestComponent();
};

FORCEINLINE uint32 GetTypeHash(const UContextualQuestComponent) { return 0; }
