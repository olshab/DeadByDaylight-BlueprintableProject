#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECurrencyType.h"
#include "StandDisplayable.h"
#include "CurrencyDisplayable.generated.h"

class UDBDSkeletalMeshComponentBudgeted;
class USkeletalMesh;

UCLASS(Blueprintable)
class ACurrencyDisplayable : public AActor, public IStandDisplayable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UDBDSkeletalMeshComponentBudgeted* SkeletalMeshComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<ECurrencyType, USkeletalMesh*> _currencyMeshes;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FinishSpawningCurrency(ECurrencyType currencyType);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BeginDestroySequence_Internal();

public:
	ACurrencyDisplayable();
};

FORCEINLINE uint32 GetTypeHash(const ACurrencyDisplayable) { return 0; }
