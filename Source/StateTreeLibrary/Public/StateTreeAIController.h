// Developed by Neko Creative technologies

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIController.h"
#include "AIController.h"
#include "AIControllerInterface.h"
#include "StateTreeAIController.generated.h"

class UStateTreeAIComponent;
/**
 * 
 */
UCLASS()
class STATETREELIBRARY_API AStateTreeAIController : public AAIController, public IAIControllerInterface
{
	GENERATED_BODY()
	
public:
	AStateTreeAIController();
	
	virtual void SetStateTree_Implementation(UStateTree* StateTree) override;
	
private:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStateTreeAIComponent> StateTreeAIComponent;
	
};
