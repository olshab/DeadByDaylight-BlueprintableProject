#pragma once

#include "CoreMinimal.h"
#include "PathBuilder.h"
#include "Templates/SubclassOf.h"
#include "PathBuilder_TowardActor.generated.h"

class UNavigationQueryFilter;
class AActor;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UPathBuilder_TowardActor : public UPathBuilder
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> FindClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseClosestEscapePointIfAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OpenDoorOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SearchForClosestActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UNavigationQueryFilter> FilterClass;

public:
	UPathBuilder_TowardActor();
};

FORCEINLINE uint32 GetTypeHash(const UPathBuilder_TowardActor) { return 0; }
