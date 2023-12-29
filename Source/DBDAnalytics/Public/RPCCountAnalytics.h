#pragma once

#include "CoreMinimal.h"
#include "BaseRPCAnalytics.h"
#include "NamedRPCCount.h"
#include "RPCCountAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FRPCCountAnalytics: public FBaseRPCAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MatchDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FNamedRPCCount> AllNamedCounts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 TotalCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> UnlistedNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 UnlistedCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CallConsoleCmdOnServer_Server_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerAcknowledgePossession_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerCheckClientPossession_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerCheckClientPossessionReliable_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerMovePacked_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerMoveOut_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerNotifyLoadedWorld_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerSetSpectatorLocation_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerShortTimeout_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerUpdateCamera_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerUpdateLevelVisibility_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerUpdateMultipleLevelsVisibility_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerVerifyViewTarget_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_ActivatePerk_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_ActivateSkillCheck_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_AddMaxSpeedMovementCurve_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_Broadcast_ConfirmChargedCompleted_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_Broadcast_StoreInteraction_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_ClearTargets_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_ClientPassedFence_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_DeactivateSkillCheck_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_EACMessageFromClient_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_HitTarget_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetImmobilized_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_Launch_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_LoadoutSpawned_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_NotifyStunHasBeenProcessed_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_OnIntroCompleted_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_OnSkillCheckFailure_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_OnSkillCheckSuccess_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetOverlappingEscape_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_PlayMontage_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_PlayerReady_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_ReceivePlayerProfile_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_RemoveMaxSpeedMovementCurve_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_RenderingFeaturesCompleted_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_ReplicateControlRotation_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_RequestEndGame_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_RequestServerTime_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_RequestStateChange_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SendAttackInput_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SendInteractionInput_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SendFastInteractionInput_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SendSecondaryActionPressed_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetCharacterData_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetConsecutiveMatchStreak_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetCustomizationMeshes_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetEquipedPerks_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetEquipment_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetInteractionToSwapTo_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetIntroCompleted_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetIsReadyToPlay_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetMaxAcceleration_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetPlayerGameState_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetPlayerLoadout_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetPlayerReady_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetPlayerWiggleSkillCheckEnabled_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetPreloadCompleted_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetReadyToTravel_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetSpectatorMode_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SendItemUseInput_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SendLeftRightMashedInput_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetMaxSpeedMultiplierScalar_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SendMessage_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetSettings_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetRunInput_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetStateStack_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_SetStopSnapping_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_StartSnapping_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_StopMontage_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_StoreAttack_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_TryDetectPlayer_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_UpdateDiscernedCharacters_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_UpdateReplicatedPips_Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Server_UpdateScreenAspectRatio_Count;

public:
	DBDANALYTICS_API FRPCCountAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FRPCCountAnalytics) { return 0; }
