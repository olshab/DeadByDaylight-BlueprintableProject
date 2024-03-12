#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "UObject/NoExportTypes.h"
#include "PerkLevelDefinition.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "GameEventForwarderInfo.h"
#include "EGameTypeModifierName.h"
#include "DBDDesignTunables.generated.h"

class UGameTypeModifierDefaults;
class UDBDTextDesignTunables;
class UMenuCameraDesignTunables;
class UDBDCoreUMGDesignTunables;

UCLASS(Blueprintable, Transient)
class DEADBYDAYLIGHT_API UDBDDesignTunables : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int8 EntityDispleasedKills;

	UPROPERTY(EditAnywhere)
	int8 BrutalKillerKills;

	UPROPERTY(EditAnywhere)
	int8 RuthlessKillerKills;

	UPROPERTY(EditAnywhere)
	int8 MercilessKillerKills;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WinStreakThresholdLarge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WinStreakThresholdSmall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxFearTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 QuantityOfItemsToBuyBeforeFreeBloodwebRefresh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPerkLevelDefinition> PerkLevelDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FGameplayTag> MetaModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FGameplayTag> RangedSurvivorAuraPerceptionModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FGameplayTag> SurvivorRevelatoryAuraPerceptionModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FGameplayTag> DisruptableAuraReadingFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UDBDTextDesignTunables> TextDesignTunableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDBDTextDesignTunables* TextTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameEventForwarderInfo> GameEventForwarderInfos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UDBDCoreUMGDesignTunables> CoreUMGDesignTunableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDBDCoreUMGDesignTunables* CoreUMGDesignTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UGameTypeModifierDefaults* GameTypeModifierDefaults;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftObjectPtr<UMenuCameraDesignTunables> SoftMenuCameraDesignTunable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UMenuCameraDesignTunables* MenuCameraDesignTunables;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _overrideDefaultLobby;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _lobbyOverrideName;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _conspicuousActionEvents;

private:
	UFUNCTION(BlueprintCallable)
	void OnPluginDataPathAdded(const FString& dataPath);

public:
	UFUNCTION(BlueprintPure)
	float GetTunableValue(FName ID, bool warnIfRowMissing) const;

	UFUNCTION(BlueprintCallable)
	static FString GetStringGameTypeTunable(EGameType gameType, EGameTypeModifierName tunableName, const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable)
	static int32 GetIntGameTypeTunable(EGameType gameType, EGameTypeModifierName tunableName, const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable)
	static bool GetBoolGameTypeTunable(EGameType gameType, EGameTypeModifierName tunableName, const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable)
	static TArray<FString> GetArrayGameTypeTunable(EGameType gameType, EGameTypeModifierName tunableName, const UObject* worldContextObject);

public:
	UDBDDesignTunables();
};

FORCEINLINE uint32 GetTypeHash(const UDBDDesignTunables) { return 0; }
