#pragma once

#include "../../core/math/vec3.hpp"

namespace selaura::bedrock {
	struct StateVectorComponent {
		Vec3 pos;
		Vec3 pos_prev;
		Vec3 pos_gamdelta;
	};
};