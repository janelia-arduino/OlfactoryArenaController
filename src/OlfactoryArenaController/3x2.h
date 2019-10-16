// ----------------------------------------------------------------------------
// 3x2.h
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#ifndef OLFACTORY_ARENA_CONTROLLER_3X2_CONSTANTS_H
#define OLFACTORY_ARENA_CONTROLLER_3X2_CONSTANTS_H
#include "Constants.h"


#if defined(__MK20DX256__)

namespace olfactory_arena_controller
{
namespace constants
{
enum{CHANNEL_COUNT=3};

// Pins

// Units

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *, (ConstantString *)[]
extern const double travel_per_unit_pulse_duration_default[CHANNEL_COUNT];

extern const long velocity_limit_default[CHANNEL_COUNT];

extern const double expose_angle_default[CHANNEL_COUNT];

extern const double hide_angle_default[CHANNEL_COUNT];

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
#endif
