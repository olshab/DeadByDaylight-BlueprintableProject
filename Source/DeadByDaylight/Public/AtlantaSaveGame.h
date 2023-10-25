#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AtlantaSaveGame.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAtlantaSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SaveSlotName;

	UPROPERTY(EditAnywhere)
	uint32 UserIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LastGenericLoadingImageId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LastSpecificLoadingImageId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLastSpecificImage;

public:
	UAtlantaSaveGame();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaSaveGame) { return 0; }
