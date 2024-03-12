using UnrealBuildTool;

public class DBDUIViewInterfaces : ModuleRules {
	public DBDUIViewInterfaces(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"BinkMediaPlayer",
			"Core",
			"CoreCommonUIUtils",
			"CoreUObject",
			"DBDSharedTypes",
			"DataTableUtilities",
			"Engine",
			"GameplayTags",
			"InputCore",
			"MediaAssets",
			"RemoteContentCache",
			"UMG",
		});
	}
}
