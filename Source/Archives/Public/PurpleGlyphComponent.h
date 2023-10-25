#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "AITypes.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "PurpleGlyphComponent.generated.h"

class UTileSpawnPoint;
class UNavigationQueryFilter;
class UBloodTrailSettings;
class ADBDPlayer;
class AGlyph;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPurpleGlyphComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UTileSpawnPoint*> _survivorSpawns;

	UPROPERTY(EditAnywhere, Transient)
	FAIMoveRequest MoveRequest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UNavigationQueryFilter> _navFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _auraRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _nextLocationDistanceMinimum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _nextLocationDistanceMaximum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _movementAcceptanceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _distanceToAccelerate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _distanceToDecelerate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor outlineColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UBloodTrailSettings* _bloodTrailSettings;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StopGlyphMovement(bool useDeceleration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StartGlyphMovement();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ResumeGlyphMovement(bool useAcceleration);

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintCallable)
	ADBDPlayer* GetTrackedPlayer();

protected:
	UFUNCTION(BlueprintPure)
	AGlyph* GetOwningGlyph() const;

public:
	UFUNCTION(BlueprintCallable)
	void Authority_StartMoveWithAcceleration(const FVector& goalLocation);

	UFUNCTION(BlueprintCallable)
	void Authority_MoveTo(FVector location);

private:
	UFUNCTION(BlueprintCallable)
	FVector Authority_GetNextLocation();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_AbortMoveWithDeceleration();

	UFUNCTION(BlueprintCallable)
	void Authority_AbortMove();

public:
	UPurpleGlyphComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPurpleGlyphComponent) { return 0; }
