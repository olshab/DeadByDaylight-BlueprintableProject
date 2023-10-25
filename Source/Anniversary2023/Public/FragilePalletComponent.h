#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "FragilePalletComponent.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UFragilePalletComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFragilePalletSpawnEvent);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFragilePalletSpawnEvent Cosmetic_OnFragilePalletSpawnBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFragilePalletSpawnEvent Cosmetic_OnFragilePalletSpawnEnd;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _fragilePalletSpawnTime;

public:
	UFragilePalletComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFragilePalletComponent) { return 0; }
