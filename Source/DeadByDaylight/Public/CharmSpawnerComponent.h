#pragma once

#include "CoreMinimal.h"
#include "CharmSlot.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "CharmIdSlot.h"
#include "CharmSpawnerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCharmSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketRootName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharmSlot> CharmSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ScaleCharm;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _forcedLOD;

public:
	UFUNCTION(BlueprintCallable)
	void ReplaceCharmTextures(const TArray<FCharmIdSlot>& customization);

public:
	UCharmSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharmSpawnerComponent) { return 0; }
