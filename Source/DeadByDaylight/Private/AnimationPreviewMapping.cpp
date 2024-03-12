#include "AnimationPreviewMapping.h"

FAnimationPreviewMapping::FAnimationPreviewMapping()
{
	this->MappingId = TEXT("");
	this->AnimationType = EAnimationPreviewType::Mori;
	this->WhenKiller = NAME_None;
	this->UseSurvivor = NAME_None;
	this->UseSurvivorCustomization = FAnimationPreviewMappingSurvivorCustomization{};
}
