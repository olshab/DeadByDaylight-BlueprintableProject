#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "QueryInstanceCollection.h"
#include "GameplayTagContainerComponent.generated.h"

class UObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GAMEPLAYTAGUTILITIES_API UGameplayTagContainerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TMap<FGameplayTag, FQueryInstanceCollection> _tagToQueries;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UObject*, FQueryInstanceCollection> _ownerToQueries;

public:
	UFUNCTION(BlueprintCallable)
	void Remove(FGameplayTag state);

	UFUNCTION(BlueprintPure)
	FGameplayTagContainer GetTags() const;

	UFUNCTION(BlueprintCallable)
	void Add(FGameplayTag state);

public:
	UGameplayTagContainerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayTagContainerComponent) { return 0; }
