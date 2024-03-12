#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "WhiteGlyphSurfaceComponent.generated.h"

class AGlyph;
class ACollectable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UWhiteGlyphSurfaceComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACollectable> _fragileObjectBP;

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportGlyph(FVector location);

	UFUNCTION(BlueprintPure)
	AGlyph* GetOwningGlyph() const;

public:
	UWhiteGlyphSurfaceComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWhiteGlyphSurfaceComponent) { return 0; }
