#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DebugIndicator.generated.h"

class UStaticMeshComponent;
class UDBDOutlineComponent;

UCLASS(Blueprintable)
class DBDGAMEPLAY_API ADebugIndicator : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _staticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetVisible(const bool visible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetColor(const FLinearColor color);

public:
	ADebugIndicator();
};

FORCEINLINE uint32 GetTypeHash(const ADebugIndicator) { return 0; }
