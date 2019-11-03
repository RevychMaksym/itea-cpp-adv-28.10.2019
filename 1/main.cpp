#include "scype.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  Scype *window = new Scype;
  window->show();

  return app.exec();
}
