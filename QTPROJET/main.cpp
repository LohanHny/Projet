#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>


int main(int argc, char *argv[])
{
    time_t secondes;
    QApplication a(argc, argv);

QWidget fenetre;

QPushButton *bouton1 = new QPushButton("RPI1");
QPushButton *bouton2 = new QPushButton("Temperature");
QPushButton *bouton3 = new QPushButton("Heure d'affichage de la température");
QPushButton *bouton4 = new QPushButton("RPI2");
QPushButton *bouton5 = new QPushButton("Temperature");
QPushButton *bouton6 = new QPushButton("Heure d'affichage de la température");
QPushButton *bouton7 = new QPushButton("RPI3");
QPushButton *bouton8 = new QPushButton("Temperature");
QPushButton *bouton9 = new QPushButton("Heure d'affichage de la température");
QGridLayout *layout = new QGridLayout;

layout->addWidget(bouton1,0,0);
layout->addWidget(bouton2,0,1);
layout->addWidget(bouton3,0,2);
layout->addWidget(bouton4,1,0);
layout->addWidget(bouton5,1,1);
layout->addWidget(bouton6,1,2);
layout->addWidget(bouton7,2,0);
layout->addWidget(bouton8,2,1);
layout->addWidget(bouton9,2,2);
fenetre.setLayout(layout);
fenetre.show();

return a.exec();
}
