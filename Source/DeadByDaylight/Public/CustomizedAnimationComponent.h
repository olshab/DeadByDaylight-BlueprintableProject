#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "CustomizedAnimationComponent.generated.h"

class UCustomizedSkeletalMesh;
class UAnimInstance;
class ADBDBasePlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCustomizedAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDBasePlayer* _owner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCustomizedSkeletalMesh* _customizedSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSubclassOf<UAnimInstance> _defaultAnimClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnCustomizationChanged();

public:
	UCustomizedAnimationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizedAnimationComponent) { return 0; }
