#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QVector>
using namespace std;

class Robot
{
public:

    Robot(int front,int back,int left,int right,int row,int collumn); //N = 1 ,S = -1,E = 2,W = -2
//    int front;
//    int back;
//    int left;
//    int right;
    //int row;
    //int collumn;

    /*Basic Function Robot*/
    void goStraight();
    void turnLeft();
    void turnRight();
    void uTurn();
    /*Basic Function Robot*/

    /*For get some information of Robot*/
    Robot getPose();
    QString getDirection();
    /*For get some information of Robot*/

    /*For Robot Survey*/
    void findPath_from_CSV(QString file_name);
    int transform_to_direction(int Path);
    void add_stack();

    struct Direction{
        int front;
        int back;
        int left;
        int right;
    }direction;

    struct Pose{
        int row;
        int col;
    }pose;

    struct Prior_Dir{
        QVector<double> v_dir;
    }prior_dir;
};

#endif // ROBOT_H
