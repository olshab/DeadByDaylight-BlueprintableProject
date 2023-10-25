#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaFriendsListScreenUMG.generated.h"

class UUMGAtlantaFriendListScreen;

UCLASS(Blueprintable)
class UAtlantaFriendsListScreenUMG : public UScreenBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAtlantaFriendListScreen* _atlantaFriendListScreen;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleResearchButtonClicked(const FText& searchInput);

	UFUNCTION(BlueprintCallable)
	void HandleClosedButtonClicked();

public:
	UAtlantaFriendsListScreenUMG();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaFriendsListScreenUMG) { return 0; }
