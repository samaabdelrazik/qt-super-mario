#pragma once

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QObject>
#include <QTimer>

class Player : public QObject, public QGraphicsRectItem {
  Q_OBJECT

 public:
  Player(QGraphicsItem* parent = nullptr);

 public slots:
  void updateState();
  void end(QTimer&);
 protected:
  void keyPressEvent(QKeyEvent* event) override;

 private:
  int velocityY;
  bool onGround;
};
