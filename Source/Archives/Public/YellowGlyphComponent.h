#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "YellowGlyphComponent.generated.h"

class UTileSpawnPoint;
class ADBDPlayer;
class AGlyph;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UYellowGlyphComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _currentlyInteractingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _skillCheckDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _skillCheckZoneLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _skillCheckDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _skillCheckAverageDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _skillCheckDistanceVariance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _teleportDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UTileSpawnPoint*> _survivorSpawns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<AGlyph*> _allGlyphs;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StartGlyphPreTeleportVFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StartGlyphPostTeleportVFX();

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportGlyph(FVector location);

	UFUNCTION(BlueprintPure)
	AGlyph* GetOwningGlyph() const;

	UFUNCTION(BlueprintCallable)
	bool Authority_TeleportGlyph(int32 maxNumberOfTries);

public:
	UYellowGlyphComponent();
};

FORCEINLINE uint32 GetTypeHash(const UYellowGlyphComponent) { return 0; }
