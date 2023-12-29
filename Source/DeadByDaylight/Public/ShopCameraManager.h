#pragma once

#include "CoreMinimal.h"
#include "CharacterCameraTag.h"
#include "RoleGenderCharacterRotation.h"
#include "GameFramework/Actor.h"
#include "NamedButton.h"
#include "ShopCameraManager.generated.h"

class ACameraActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AShopCameraManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FNamedButton ReloadDBBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FRoleGenderCharacterRotation> CharacterRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FCharacterCameraTag> CatalogCharactersCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FCharacterCameraTag> StoryCharactersCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ACameraActor* HookCamera;

public:
	AShopCameraManager();
};

FORCEINLINE uint32 GetTypeHash(const AShopCameraManager) { return 0; }
