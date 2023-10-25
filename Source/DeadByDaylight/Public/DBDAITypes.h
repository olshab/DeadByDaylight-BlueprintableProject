#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "DBDAITypes.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDAITypes : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Root;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Task_Slasher_AttackTarget;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Slasher_AttackTarget;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Task_Slasher_CrawlingTarget;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Slasher_CrawlingTarget;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Slasher_Investigate_NotInChase;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Slasher_Investigate_InChase;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Slasher_Investigate_MoveAround;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Slasher_Patrol;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Slasher_Patrol_MoveAround;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_Standing;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_Crawling;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_Flee_Run_Always;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_Flee_Run_InChase;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_Flee_Run_NotInChase;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_Patrol;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_RescueCarriedFriend;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_RemoveTrap;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_Chained;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_HelpOther;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_GoalInTerror;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_Carried;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_UseSelfItem;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_InLocker;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_Flee_InLocker;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_RepairGenerator;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_BeforeGoals;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkills_Context_Service_Camper_UseK32Emp;

	UPROPERTY(EditAnywhere)
	FGameplayTag AIBlackboard_InteractableWishList_FindSkill;

	UPROPERTY(EditAnywhere)
	FGameplayTag AIBlackboard_ActorWishList_FindSkill;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PointOfInterest_ActivatedDoor;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PointOfInterest_ActivatedDoor_Opened;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PointOfInterest_BrokenGenerator;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PointOfInterest_OccupiedMeatHook;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PointOfInterest_HexTotem;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_Hearing_SilenceStatusEffect_Header;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PinLocation_WarpStart;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PinLocation_WarpEnd;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PinLocation_EQS;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PinLocation_WishedObj;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PinLocation_GoTo;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PinObject_EQS;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PinObject_WishedObj;

	UPROPERTY(EditAnywhere)
	FGameplayTag AI_PinObject_GoTo;

public:
	UDBDAITypes();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAITypes) { return 0; }
