#include <QApplication>

#include "view.h"

int main(int argc, char *argv[]) {
  _putenv_s("LC_NUMERIC", "en_US.UTF-8");
  QApplication a(argc, argv);
  s21::Model model;
  s21::Controller controller(&model);
  s21::View w(&controller);
  w.show();
  return a.exec();
}
