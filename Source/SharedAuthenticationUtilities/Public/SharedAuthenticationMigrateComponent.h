#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SharedAuthenticationMigrateComponent.generated.h"

UCLASS(Blueprintable)
class SHAREDAUTHENTICATIONUTILITIES_API USharedAuthenticationMigrateComponent : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UObject* _worldContextObject;

public:
	USharedAuthenticationMigrateComponent();
};

FORCEINLINE uint32 GetTypeHash(const USharedAuthenticationMigrateComponent) { return 0; }
