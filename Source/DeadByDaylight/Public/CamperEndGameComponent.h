#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "CamperEndGameComponent.generated.h"

class AEndGameEntity;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperEndGameComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AEndGameEntity> _endGameEntityClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _delayBeforeSacrifice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _readyToBeSacrificed;

public:
	UFUNCTION(BlueprintCallable)
	void OnEndGameSacrificeEnd();

private:
	UFUNCTION(BlueprintCallable)
	void OnDelayBeforeSacrificeEnd();

public:
	UFUNCTION(BlueprintPure)
	bool GetSacrificedByEndGame() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCamperEndGameComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperEndGameComponent) { return 0; }
