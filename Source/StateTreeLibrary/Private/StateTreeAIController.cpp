// Developed by Neko Creative technologies


#include "StateTreeAIController.h"
#include "Components/StateTreeAIComponent.h"


AStateTreeAIController::AStateTreeAIController()
{
	StateTreeAIComponent = CreateDefaultSubobject<UStateTreeAIComponent>("StateTreeAIController");
	StateTreeAIComponent->SetStartLogicAutomatically(false);
}

void AStateTreeAIController::SetStateTree_Implementation(UStateTree* StateTree)
{
	if (!StateTree)
	{
		UE_LOG(LogTemp, Warning, TEXT("AStateTreeAIController::SetStateTree_Implementation received a null State Tree."));
		return;
	}

	if (StateTreeAIComponent->IsRunning())
	{
		StateTreeAIComponent->StopLogic(TEXT("State Tree asset changed"));
	}

	StateTreeAIComponent->SetStateTree(StateTree);
	StateTreeAIComponent->StartLogic();
}
