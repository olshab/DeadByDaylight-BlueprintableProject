#pragma once

#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "Engine/EngineTypes.h"
#include "DBDNavLinkCustomComponent.generated.h"

class ANavLinkProxy;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDNavLinkCustomComponent : public UNavLinkCustomComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BaseLinkRelativeStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BaseLinkRelativeEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENavLinkDirection::Type> BaseLinkDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoSnapSmartLinkPointsUpHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoSnapSmartLinkPointsDownHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> AutoSnapCollisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoSmartLinkDirectionMaxHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DisableSmartLinkOnPathObstruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PathObstructionTestDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PathObstructionTestShapeRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PathObstructionTestHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> PathObstructionCollisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DisableOtherSmartLinkInProximityOnEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableOtherSmartLinkInProximityOnDisable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OtherSmartLinkInProximitySearchDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowDebugInfo;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<ANavLinkProxy*> _navLinkProxyInProximity;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UDBDNavLinkCustomComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDNavLinkCustomComponent) { return 0; }
