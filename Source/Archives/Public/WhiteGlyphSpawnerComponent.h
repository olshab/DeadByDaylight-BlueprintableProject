#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "WhiteGlyphSpawnerComponent.generated.h"

class UWhiteGlyphSurfaceComponent;
class UTileSpawnPoint;
class AGlyph;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UWhiteGlyphSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AGlyph> _surfaceGlyphClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minDistanceFromBasement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceFromBasement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _spawnDistanceDebug;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _surfaceGlyphCoolDownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UWhiteGlyphSurfaceComponent* _lastSurfaceGlyphComponentDebug;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UTileSpawnPoint*> _spawnPointsCollection;

protected:
	UFUNCTION(BlueprintPure)
	AGlyph* GetOwningGlyph() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	UWhiteGlyphSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWhiteGlyphSpawnerComponent) { return 0; }
