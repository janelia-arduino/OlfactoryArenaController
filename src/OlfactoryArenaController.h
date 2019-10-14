// ----------------------------------------------------------------------------
// OlfactoryArenaController.h
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#ifndef OLFACTORY_ARENA_CONTROLLER_H
#define OLFACTORY_ARENA_CONTROLLER_H
#include <ArduinoJson.h>
#include <JsonStream.h>
#include <Array.h>
#include <Vector.h>
#include <ConstantVariable.h>
#include <Functor.h>

#include <ModularServer.h>
#include <ModularDeviceBase.h>
#include <ServoController.h>

#include "OlfactoryArenaController/Constants.h"


class OlfactoryArenaController : public ServoController
{
public:
  OlfactoryArenaController();
  virtual void setup();

  void expose(size_t channel);
  void exposeForDuration(size_t channel,
    size_t duration);
  void exposeAll();
  void exposeAllForDuration(size_t duration);
  void hide(size_t channel);
  void hideAll();
  bool exposed(size_t channel);
  void toggle(size_t channel);
  void toggleAll();

private:
  modular_server::Property properties_[olfactory_arena_controller::constants::PROPERTY_COUNT_MAX];
  modular_server::Parameter parameters_[olfactory_arena_controller::constants::PARAMETER_COUNT_MAX];
  modular_server::Function functions_[olfactory_arena_controller::constants::FUNCTION_COUNT_MAX];
  modular_server::Callback callbacks_[olfactory_arena_controller::constants::CALLBACK_COUNT_MAX];

  bool exposed_[olfactory_arena_controller::constants::CHANNEL_COUNT];

  // Handlers
  void updateExposeOrHideAngleHandler(size_t channel);
  void exposeHandler();
  void exposeHandler(int channel);
  void exposeForDurationHandler();
  void exposeAllForDurationHandler();
  void hideHandler();
  void hideHandler(int channel);
  void dummyHandler(int channel);
  void exposeAllHandler(modular_server::Pin * pin_ptr);
  void hideAllHandler(modular_server::Pin * pin_ptr);
  void toggleAllHandler(modular_server::Pin * pin_ptr);

};

#endif
