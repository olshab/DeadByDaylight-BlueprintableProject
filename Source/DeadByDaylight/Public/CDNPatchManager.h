#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CDNPatchManager.generated.h"

class UAtlantaPendingContent;
class UGameInstance;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UCDNPatchManager : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InstallDirectory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PakOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PakMountPoint;

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UGameInstance> _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAtlantaPendingContent* _currentContentToInstall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FString> _remainingManifestsToInstall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FString, UAtlantaPendingContent*> _contentToInstall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAtlantaPendingContent* _MobilePendingContent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRequestSucceeded(UAtlantaPendingContent* pendingContent);

	UFUNCTION(BlueprintCallable)
	void OnRequestFailed(FText errorText, int32 errorCode);

	UFUNCTION(BlueprintCallable)
	void OnInstallSucceeded();

	UFUNCTION(BlueprintCallable)
	void OnInstallFailed(FText errorText, int32 errorCode);

public:
	UCDNPatchManager();
};

FORCEINLINE uint32 GetTypeHash(const UCDNPatchManager) { return 0; }
