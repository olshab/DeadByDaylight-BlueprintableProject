#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AssetLibraryLoader.h"
#include "AssetLibraryManager.generated.h"

class UTutorialAssetLibrary;
class UIniAssetLibrary;
class UGameAssetLibrary;
class UCharacterItemsAssetLibrary;
class UMenuAssetLibrary;
class UShopManager;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAssetLibraryManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UObject* _worldContextObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<int32, UCharacterItemsAssetLibrary*> _characterItemsAssetLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UIniAssetLibrary* _globalAssetLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMenuAssetLibrary* _menuAssetLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGameAssetLibrary* _gameAssetLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UTutorialAssetLibrary* _tutorialAssetLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UShopManager* _shopManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FAssetLibraryLoader> _loadingList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 CharacterItemsAssetLoadCountPerChunk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 BlindPackAssetLoadCountPerChunk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 MenuAssetLoadCountPerChunk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 GlobalAssetLoadCountPerChunk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 GameAssetLoadCountPerChunk;

public:
	UAssetLibraryManager();
};

FORCEINLINE uint32 GetTypeHash(const UAssetLibraryManager) { return 0; }
