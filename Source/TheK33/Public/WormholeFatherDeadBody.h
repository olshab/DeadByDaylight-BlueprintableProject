#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Templates/SubclassOf.h"
#include "WormholeFatherDeadBody.generated.h"

class UStaticMeshComponent;
class UBoxPlayerOverlapComponent;
class UInteractor;
class UCollectFatherKeyCardInteraction;
class USceneComponent;
class AWormholeFatherKeyCard;
class AActor;

UCLASS(Blueprintable)
class AWormholeFatherDeadBody : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UStaticMeshComponent* _wrmFatherDeadBodyStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _wrmFatherKeyCardAttachment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AWormholeFatherKeyCard> _wrmFatherEasterEggKeyCardStaticClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UBoxPlayerOverlapComponent* _wrmFatherKeyCardInteractableZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractor* _wrmKeyCardFirstCollectionInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCollectFatherKeyCardInteraction* _fatherKeyCardCollectionInteraction;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	AActor* _wrmFatherEasterEggSpawnedKeyCard;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AWormholeFatherDeadBody();
};

FORCEINLINE uint32 GetTypeHash(const AWormholeFatherDeadBody) { return 0; }
