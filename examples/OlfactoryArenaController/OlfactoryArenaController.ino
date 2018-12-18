#include <OlfactoryArenaController.h>


OlfactoryArenaController dev;

void setup()
{
  dev.setup();
  dev.startServer();
}

void loop()
{
  dev.update();
}
