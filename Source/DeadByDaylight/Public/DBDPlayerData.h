#pragma once

#include "CoreMinimal.h"
#include "YawAndPitchRotator_NetQuantize16.h"
#include "Components/ActorComponent.h"
#include "EInputInteractionType.h"
#include "UObject/NoExportTypes.h"
#include "DBDPlayerData.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDPlayerData : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemUseButtonStateChanged, bool, isPressed);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnItemUseButtonStateChanged OnItemUseButtonStateChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FYawAndPitchRotator_NetQuantize16 _controlRotation;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetPlayerReady();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetMutatorComponentReady();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetMapSpecificComponentReady();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetKillerSpecificComponentReady();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetIntroCompleted();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_RenderingFeaturesCompleted();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_NotifyAIPawnSpawned();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_LoadoutSpawned();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_CampaignDataSynced();

public:
	UFUNCTION(BlueprintPure)
	bool IsInteractionInputPressed(EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintPure)
	FRotator GetControlRotation() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDBDPlayerData();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPlayerData) { return 0; }
