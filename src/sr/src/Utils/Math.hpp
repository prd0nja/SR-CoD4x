#pragma once
#define GLM_FORCE_CTOR_INIT
#define GLM_FORCE_XYZW_ONLY
#define GLM_FORCE_LEFT_HANDED
#define GLM_ENABLE_EXPERIMENTAL

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/norm.hpp>
#include <glm/gtx/string_cast.hpp>

using vec2 = glm::vec2;
using vec3 = glm::vec3;
using vec4 = glm::vec4;
using mat3 = glm::mat3;
using mat4 = glm::mat4;

#define M_PI 3.14159265358979323846f
#define ANGLE2SHORT(x) (static_cast<int>((x) * 65536 / 360) & 65535)
#define SHORT2ANGLE(x) (x * (360.0f / 65536))

#define PITCH 0
#define YAW 1
#define ROLL 2
