#include "Items/Item.h"
#include "Slash/DebugMacros.h"

void AItem::BeginPlay()
{
    Super::BeginPlay();

    FVector Location = GetActorLocation();
    FVector Forward = GetActorForwardVector();

    DRAW_SPHERE2(Location + Forward * 60.f);

    FMatrix Matrix = FMatrix::Identity;
    Matrix.SetOrigin(FVector(0.f, 0.f, 200.f));

    DRAW_DONUT(Matrix);
}