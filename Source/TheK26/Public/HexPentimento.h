#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexPentimento.generated.h"

class ATotem;
class URekindleTotemInteraction;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK26_API UHexPentimento : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<FName> _statusEffectNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<URekindleTotemInteraction> _rekindleInteractionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ATotem*> _blockedTotems;

public:
	UHexPentimento();
};

FORCEINLINE uint32 GetTypeHash(const UHexPentimento) { return 0; }
