#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SurvivorCosmeticHelperSpawnerComponent.generated.h"

class UDataTable;
class ASurvivorCosmeticHelperActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOSMETIC_API USurvivorCosmeticHelperSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UDataTable* _survivorCosmeticActorHelperDB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ASurvivorCosmeticHelperActor*> survivorCosmeticHelperActors;

public:
	UFUNCTION(BlueprintPure)
	TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActors() const;

	UFUNCTION(BlueprintPure)
	TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorByClass(const TSubclassOf<ASurvivorCosmeticHelperActor> cosmeticHelperActorClassType) const;

public:
	USurvivorCosmeticHelperSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorCosmeticHelperSpawnerComponent) { return 0; }
