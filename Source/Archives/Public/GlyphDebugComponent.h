#pragma once

#include "CoreMinimal.h"
#include "EPawnType.h"
#include "Components/ActorComponent.h"
#include "GlyphDebugComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UGlyphDebugComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _assignOwnerOnBeginPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EPawnType _ownerPawnType;

public:
	UGlyphDebugComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGlyphDebugComponent) { return 0; }
