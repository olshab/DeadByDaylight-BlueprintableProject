#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AICharacterBehaviour.generated.h"

UCLASS(Blueprintable)
class UAICharacterBehaviour : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Update(float deltaTime);

	UFUNCTION(BlueprintCallable)
	void Stop();

	UFUNCTION(BlueprintCallable)
	void Start();

	UFUNCTION(BlueprintCallable)
	void SetEnable(bool enable);

	UFUNCTION(BlueprintCallable)
	void Resume();

	UFUNCTION(BlueprintCallable)
	void Pause();

	UFUNCTION(BlueprintCallable)
	bool IsEnabled() const;

public:
	UAICharacterBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviour) { return 0; }
