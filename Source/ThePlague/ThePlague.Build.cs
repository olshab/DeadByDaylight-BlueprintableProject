using UnrealBuildTool;

public class ThePlague : ModuleRules {
	public ThePlague(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"AIModule",
			"Activation",
			"AkAudio",
			"AnimationBudgetAllocator",
			"AnimationUtilities",
			"BHVRAnalytics",
			"BinkMediaPlayer",
			"Competence",
			"Core",
			"CoreUObject",
			"CoreUtilities",
			"Customization",
			"DBDAnalytics",
			"DBDAnimation",
			"DBDAnimationBudgetAllocator",
			"DBDAudio",
			"DBDGameplay",
			"DBDInput",
			"DBDInteraction",
			"DBDSharedTypes",
			"DBDUIViewInterfaces",
			"DBDUIViewsMobile",
			"DBDVideoPlayer",
			"DataTableUtilities",
			"DeadByDaylight",
			"Engine",
			"Foliage",
			"GFXUtilities",
			"GameSessionDS",
			"GameflowNotifications",
			"GameplayTagUtilities",
			"GameplayTags",
			"GameplayUtilities",
			"InputCore",
			"InputUtilities",
			"Interaction",
			"LevelSequence",
			"MediaAssets",
			"MovieScene",
			"NavigationSystem",
			"NetworkUtilities",
			"Niagara",
			"OnlineMessagesUtilities",
			"OnlinePresence",
			"OnlineSubsystemUtils",
			"OnlineTransactions",
			"Paper2D",
			"Penalty",
			"PhysicsCore",
			"PhysicsUtilities",
			"PlatformsProviders",
			"Projectile",
			"QueryService",
			"RemoteContentCache",
			"ReversibleActionSystem",
			"RewardUtilities",
			"ScaleformUI",
			"SignificanceUtilities",
			"Slate",
			"SlateCore",
			"SocialParty",
			"StatSystem",
			"SystemUtilities",
			"TimeUtilities",
			"Toasts",
			"UMG",
			"VFXUtilities",
		});
	}
}
