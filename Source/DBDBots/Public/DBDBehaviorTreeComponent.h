#pragma once

#include "CoreMinimal.h"
#include "RelevantNodeMemory.h"
#include "AIDisplayDebugInterface.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "DBDBehaviorTreeComponent.generated.h"

class UObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDBehaviorTreeComponent : public UBehaviorTreeComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UClass*, FRelevantNodeMemory> _lastRelevantNodeMemories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UObject*> _createdObjects;

public:
	UDBDBehaviorTreeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBehaviorTreeComponent) { return 0; }
