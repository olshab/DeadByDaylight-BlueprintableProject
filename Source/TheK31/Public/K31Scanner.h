#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "StatProperty.h"
#include "UObject/NoExportTypes.h"
#include "K31Scanner.generated.h"

class UTexture;
class AActor;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31Scanner : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnScannerUpdated);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnScannerUpdated OnScannerUpdated;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _radarRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _levelHeightThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UTexture* _debugPointTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _owningActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> _playersShownOnRadar;

public:
	UFUNCTION(BlueprintPure)
	TArray<FLinearColor> GetEncodedPoints() const;

public:
	UK31Scanner();
};

FORCEINLINE uint32 GetTypeHash(const UK31Scanner) { return 0; }
