// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Child_Cult : ModuleRules
{
	public Child_Cult(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
