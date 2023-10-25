#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UObject/NoExportTypes.h"
#include "ETotemState.h"
#include "Engine/EngineTypes.h"
#include "RekindledTotem.generated.h"

class ATotem;
class AActor;
class USourceBasedOutlineUpdateStrategy;
class UDBDOutlineComponent;

UCLASS(Blueprintable)
class THEK26_API ARekindledTotem : public AStaticMeshActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _auraColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USourceBasedOutlineUpdateStrategy* _outlineStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RebuildTotem(ATotem* totem);

private:
	UFUNCTION(BlueprintCallable)
	void OnParentTotemEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowShadowTotem(bool instant);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HideShadowTotem(bool instant);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CleanseTotem(ATotem* totem, const ETotemState oldTotemState);

public:
	ARekindledTotem();
};

FORCEINLINE uint32 GetTypeHash(const ARekindledTotem) { return 0; }
