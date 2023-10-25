#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WhiteGlyphBasementComponent.generated.h"

class AGlyph;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UWhiteGlyphBasementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReadyForInteractionDelegate);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnReadyForInteractionDelegate OnReadyForInteraction;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _basementGlyphInteractionCoolDownTime;

protected:
	UFUNCTION(BlueprintPure)
	AGlyph* GetOwningGlyph() const;

public:
	UWhiteGlyphBasementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWhiteGlyphBasementComponent) { return 0; }
