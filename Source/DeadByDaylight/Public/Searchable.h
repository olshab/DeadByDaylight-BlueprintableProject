#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "ContainsItemInterface.h"
#include "Searchable.generated.h"

class UPrimitiveComponent;
class ADBDPlayer;
class ACollectable;
class USearchableItemStrategy;
class USearchableSpawnPoint;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ASearchable : public AInteractable, public IAIInteractableTargetInterface, public IContainsItemInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSearchedChanged, bool, searched);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSearchedChanged OnSearchedChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	USearchableItemStrategy* SearchableItemStrategy;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USearchableSpawnPoint* _searchableSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACollectable* _spawnedItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ACollectable* _itemInsideSearchable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, uint8> _numberOfSearchesWhileOpenPerPlayer;

public:
	UFUNCTION(BlueprintCallable)
	void SetHasBeenSearched(bool newHasBeenSearched);

	UFUNCTION(BlueprintPure)
	bool HasBeenSearched() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UPrimitiveComponent* GetInteractorPrimitiveComponent() const;

	UFUNCTION(BlueprintCallable)
	bool ContainsSpawnedItem() const;

	UFUNCTION(BlueprintCallable)
	ACollectable* Authority_SpawnObject(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASearchable();
};

FORCEINLINE uint32 GetTypeHash(const ASearchable) { return 0; }
