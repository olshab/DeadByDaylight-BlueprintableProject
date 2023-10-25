#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EScreenType.h"
#include "ScreenController.generated.h"

class UDBDGameInstance;
class UUserWidget;
class UScreenBase;
class UGFxMoviePlayer;
class UGFxObject;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UScreenController : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDGameInstance* _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGFxObject* _screenControllerObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGFxMoviePlayer* _moviePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FString, UScreenBase*> _screenDictionary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FString, EScreenType> _screenTypeDictionary;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<UClass*, TWeakObjectPtr<UUserWidget>> _cachedUMGScreens;

public:
	UScreenController();
};

FORCEINLINE uint32 GetTypeHash(const UScreenController) { return 0; }
