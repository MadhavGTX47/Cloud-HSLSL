//// Copyright Epic Games, Inc. All Rights Reserved.

#include "assn1.h"
#include "Modules/ModuleManager.h"



void FAssn1GameModuleImp1l::StartupModule()
{
	AddShaderSourceDirectoryMapping("/Game", FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders")));
}

IMPLEMENT_PRIMARY_GAME_MODULE(FAssn1GameModuleImp1l, assn1, "assn1" );
