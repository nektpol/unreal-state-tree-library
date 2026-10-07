// Developed by Neko Creative technologies

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AIControllerInterface.generated.h"

class UStateTree;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAIControllerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STATETREELIBRARY_API IAIControllerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="StateTreeLibrary")
	void SetStateTree(UStateTree* StateTree);
};
