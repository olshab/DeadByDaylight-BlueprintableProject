#include "BhvrAssetViewCameraSequenceSystem.h"
#include "UObject/NoExportTypes.h"

void ABhvrAssetViewCameraSequenceSystem::StopSequence()
{

}

void ABhvrAssetViewCameraSequenceSystem::SetPlaybackPosition(int32 NewPlaybackPosition)
{

}

void ABhvrAssetViewCameraSequenceSystem::SelectCameraSequence(const FString& DisplayName)
{

}

void ABhvrAssetViewCameraSequenceSystem::RestartSequence()
{

}

void ABhvrAssetViewCameraSequenceSystem::PlaySequence()
{

}

void ABhvrAssetViewCameraSequenceSystem::PauseSequence()
{

}

void ABhvrAssetViewCameraSequenceSystem::LoadSequences(const TArray<FAssetData>& SequenceAssetDatas)
{

}

bool ABhvrAssetViewCameraSequenceSystem::HasActiveSequence() const
{
	return false;
}

FString ABhvrAssetViewCameraSequenceSystem::GetSelectedCameraSequenceName() const
{
	return TEXT("");
}

int32 ABhvrAssetViewCameraSequenceSystem::GetPlaybackPosition() const
{
	return 0;
}

int32 ABhvrAssetViewCameraSequenceSystem::GetMaxPlaybackPosition() const
{
	return 0;
}

ABhvrAssetViewCameraSequenceSystem::ABhvrAssetViewCameraSequenceSystem()
{
	this->CameraSequences = TArray<FBhvrAssetViewCameraSequence>();
	this->SelectedCameraSequence = TEXT("");
	this->bHasActiveSequence = false;
	this->PlaybackPosition = 0;
	this->MaxPlaybackPosition = 0;
}
