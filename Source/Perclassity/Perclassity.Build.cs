// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Perclassity : ModuleRules
{
	public Perclassity(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
