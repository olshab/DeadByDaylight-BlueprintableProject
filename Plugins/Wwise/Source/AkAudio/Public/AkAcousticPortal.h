#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkAcousticPortalState.h"
#include "AkAcousticPortal.generated.h"

class UAkPortalComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkAcousticPortal : public AVolume
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAkPortalComponent* Portal;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AkAcousticPortalState InitialState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool bRequiresStateMigration;

public:
	UFUNCTION(BlueprintCallable)
	void OpenPortal();

	UFUNCTION(BlueprintPure)
	AkAcousticPortalState GetCurrentState() const;

	UFUNCTION(BlueprintCallable)
	void ClosePortal();

public:
	AAkAcousticPortal();
};

FORCEINLINE uint32 GetTypeHash(const AAkAcousticPortal) { return 0; }
