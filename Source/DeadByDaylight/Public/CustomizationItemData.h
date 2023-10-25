#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MaterialReplacerData.h"
#include "CustomizationData.h"
#include "ECustomizationCategory.h"
#include "UObject/SoftObjectPtr.h"
#include "ConditionalMaterialReplacer.h"
#include "TextureReplacerData.h"
#include "ECharmCategory.h"
#include "BPAttachementSocketData.h"
#include "CustomAnimData.h"
#include "UnlockSaveStatCondition.h"
#include "CustomSoundFXData.h"
#include "CustomizationItemData.generated.h"

class USkeletalMesh;
class UAnimInstance;
class AActor;

USTRUCT(BlueprintType)
struct FCustomizationItemData: public FCustomizationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<USkeletalMesh> ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UAnimInstance> AnimClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> ItemBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMaterialReplacerData> MaterialsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FConditionalMaterialReplacer ConditionalMaterialReplacer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTextureReplacerData> TexturesMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> SkeletalComponentTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer CosmeticOverrideSemanticTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CollectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CollectionDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PrestigeUlockLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PrestigeUnlockDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharmCategory CharmCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBPAttachementSocketData> SocketAttachements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FUnlockSaveStatCondition> UnlockingConditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInNonViolentBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsEntitledByDefault;

	UPROPERTY(EditAnywhere)
	uint32 PlatformExclusiveFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomSoundFXData> CustomSFXs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomAnimData AnimationData;

public:
	DEADBYDAYLIGHT_API FCustomizationItemData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationItemData) { return 0; }
