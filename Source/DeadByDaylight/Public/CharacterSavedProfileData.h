#pragma once

#include "CoreMinimal.h"
#include "PlayerLoadoutData.h"
#include "BloodWebPersistentData.h"
#include "UObject/NoExportTypes.h"
#include "EquippedPlayerCustomization.h"
#include "CharacterSavedInventoryData.h"
#include "SavedCharacterLevelData.h"
#include "SavedStatsData.h"
#include "CharacterSavedProfileData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSavedProfileData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodWebLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimesConfronted;

	UPROPERTY(EditAnywhere)
	TArray<FDateTime> PrestigeEarnedDates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBloodWebPersistentData BloodWebData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPlayerLoadoutData CharacterLoadoutData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEquippedPlayerCustomization CurrentCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> UniquePerksAdded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CharacterBloodwebMigrationIsDone;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharacterSavedInventoryData> InventoryData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSavedCharacterLevelData> CharacterLevelData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSavedStatsData> StatProgression;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 PrestigeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 LegacyPrestigeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 CharacterExperience;

public:
	DEADBYDAYLIGHT_API FCharacterSavedProfileData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterSavedProfileData) { return 0; }
