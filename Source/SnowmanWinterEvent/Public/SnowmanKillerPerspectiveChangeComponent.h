#pragma once

#include "CoreMinimal.h"
#include "PlayerPerspectiveChangeComponent.h"
#include "PlayerPerspectiveChangeTargetData.h"
#include "Templates/SubclassOf.h"
#include "SnowmanKillerPerspectiveChangeComponent.generated.h"

class UDBDSpringArmComponent;
class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API USnowmanKillerPerspectiveChangeComponent : public UPlayerPerspectiveChangeComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPlayerPerspectiveChangeTargetData _killerViewPerspectiveChangeTargetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPlayerPerspectiveChangeTargetData _thirdPersonSnowmanKillerPerspectiveChangeTargetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UDBDSpringArmComponent> _springArmClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _pitchLimitLower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _pitchLimitUpper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UDBDSpringArmComponent* _snowmanSpringArm;

private:
	UFUNCTION(BlueprintCallable)
	void SetFirstPersonTargetData(const ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USnowmanKillerPerspectiveChangeComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanKillerPerspectiveChangeComponent) { return 0; }
