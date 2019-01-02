// ----------------------------------------------------------------------------
// 5x3.h
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#ifndef OLFACTORY_ARENA_CONTROLLER_5X3_CONSTANTS_H
#define OLFACTORY_ARENA_CONTROLLER_5X3_CONSTANTS_H
#include "Constants.h"


#if defined(__MK64FX512__)

namespace olfactory_arena_controller
{
namespace constants
{
enum{CHANNEL_COUNT=3};
enum{EVENT_COUNT_MAX=36};

// Pins

// Units

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *, (ConstantString *)[]
extern const double travel_per_unit_pulse_duration_default[CHANNEL_COUNT];

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
