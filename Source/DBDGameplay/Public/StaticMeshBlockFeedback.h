#pragma once

#include "CoreMinimal.h"
#include "FadingBlockFeedback.h"
#include "StaticMeshBlockFeedback.generated.h"

class UStaticMeshComponent;
class UMaterialHelper;

UCLASS(Blueprintable, Abstract)
class AStaticMeshBlockFeedback : public AFadingBlockFeedback
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMaterialHelper* _materialHelper;

public:
	AStaticMeshBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const AStaticMeshBlockFeedback) { return 0; }
