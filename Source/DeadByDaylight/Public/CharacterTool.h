#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DBDEditorActor.h"
#include "CharacterToolData.h"
#include "CharacterToolSpawnParameters.h"
#include "UObject/SoftObjectPtr.h"
#include "NamedButton.h"
#include "CharacterTool.generated.h"

class AActor;
class ATargetPoint;
class ABaseSky;
class ADBDMenuPlayer;

UCLASS(Blueprintable)
class ACharacterTool : public ADBDEditorActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ATargetPoint*> SpawnLocations;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCharacterToolData _customizationData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCharacterToolSpawnParameters _defaultSpawnParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _powerSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EAttachmentRule _powerAttachmentRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _muteAudioInPIE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isUsingGameSkeleton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<ABaseSky> _overallLightingClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FNamedButton _showHelp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDMenuPlayer*, FCharacterToolSpawnParameters> _characters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _lighting;

public:
	ACharacterTool();
};

FORCEINLINE uint32 GetTypeHash(const ACharacterTool) { return 0; }
