#pragma once

#include "DrawDebugHelpers.h"
#define Thirty 30

#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, true);
#define DRAW_SPHERE_SingleFrame(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, false, -1.f);
#define DRAW_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Magenta, true, -1.f, 0., 1.f); 
#define DRAW_LINE_SingleFrame(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Magenta, false, -1.f, 0., 1.f); 
#define DRAW_POINT(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true); 
#define DRAW_POINT_SingleFrame(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, false, -1.f); 

#define DRAW_VECTOR(StartLocation, EndLocation) if(GetWorld()) \
	{ \
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Magenta, true, -1.f, 0., 1.f); \
	DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, true); \
	}
#define DRAW_VECTOR_SingleFrame(StartLocation, EndLocation) if(GetWorld()) \
	{ \
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Magenta, false, -1.f, 0., 1.f); \
	DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, false, -1.f); \
	}
#define DRAW_SPHERE2(EndLocation) if(GetWorld()) \
	{ \
	DrawDebugSphere(GetWorld(), EndLocation, 15.f, Thirty, FColor::Green, true); \
	}
#define DRAW_DONUT(Matrix) if(GetWorld()) DrawDebug2DDonut(World, Matrix, 60.f, 100.f, 32, FColor::Yellow, true, -1.f, 0, 2);
