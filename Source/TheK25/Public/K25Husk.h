#pragma once

#include "CoreMinimal.h"
#include "DBDBasePlayer.h"
#include "K25Husk.generated.h"

class UCustomizedSkeletalMesh;
class UAnimationMontageSlave;

UCLASS(Blueprintable)
class AK25Husk : public ADBDBasePlayer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCustomizedSkeletalMesh* _customizedSkeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _k25CharacterOverrideID;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StartDisappearing();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StartAppearing();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HideHusk();

public:
	AK25Husk();
};

FORCEINLINE uint32 GetTypeHash(const AK25Husk) { return 0; }
