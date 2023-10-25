#pragma once

#include "CoreMinimal.h"
#include "S3FriendsListGameConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3FriendsListGameConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxFriendSuggestionsFacebook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxFriendSuggestionsGoogle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxFriendSuggestionsRecentlyPlayed;

public:
	DEADBYDAYLIGHT_API FS3FriendsListGameConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3FriendsListGameConfig) { return 0; }
