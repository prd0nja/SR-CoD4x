#pragma once
// https://github.com/xoxor4d/iw3xo-dev/blob/master/src/components/modules/movement.cpp
#include "CoD4.hpp"

namespace SR
{
	class CS
	{
	public:
		static void WalkMove(pmove_tt* pm, pml_tt* pml);
		static void AirMove(pmove_tt* pm, pml_tt* pml);
		static void GroundTrace(pmove_tt* pm, pml_tt* pml);
		static bool JumpCheck(pmove_tt* pm, pml_tt* pml);
		static void Friction(pmove_tt* pm, pml_tt* pml);
		static void Accelerate(const vec3& wishdir, float wishspeed, playerState_tt* ps, pml_tt* pml);
		static void AirAccelerate(const vec3& wishdir, float wishspeed, playerState_tt* ps, pml_tt* pml);
		static void TryPlayerMove(pmove_tt* pm, pml_tt* pml);
		static void ClipVelocity(const vec3& in, const vec3& normal, vec3& out, float overbounce);
		static float PermuteRestrictiveClipPlanes(const vec3& velocity, int planeCount, vec3* planes, int* permutation);
		static bool SlideMove(pmove_tt* pm, pml_tt* pml, bool gravity);
		static void StepSlideMove(pmove_tt* pm, pml_tt* pml, bool gravity);
	};
}
