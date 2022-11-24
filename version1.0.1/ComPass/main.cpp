#include <QCoreApplication>
#include <robot.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Robot robot1(-1,1,2,-2,0,0); //N = 1 ,S = -1,E = 2,W = -2
    int k;
    while(1)
    {
        cin>>k;
        if(k == 1)
        {
            robot1.findPath_from_CSV("D:/RobotCompass/ComPass/directionforC.csv");
            cout<<"\n";
            cout<<"row : "<<robot1.getPose().pose.row<<endl; //บอกพิกัด row
            cout<<"col : "<<robot1.getPose().pose.col<<endl; //บอกพิกัด col
        }
    }

//    robot1.uTurn();

//    cout<<"row : "<<robot1.getPose().pose.row<<endl; //บอกพิกัด row
//    cout<<"col : "<<robot1.getPose().pose.col<<endl; //บอกพิกัด col
//    cout<<robot1.getDirection().toStdString()<<endl; //บอกทิศหน้าหุ่นเป็นตัวหนังสือ
//    cout<<robot1.getPose().direction.front<<endl;    //บอกทิศ(แล้วแต่จะเลือก)เป็นตัวเลข
//    int last = robot1.visited.vector_visited.length();
//    cout<<"Number of step : "<<last<<endl;
//    for(int i=0;i<last;i++)
//    {
//        cout<<robot1.visited.vector_visited.at(i).first<<","<<robot1.visited.vector_visited.at(i).second<<endl;
//    }


//    vector<pair<int,int>> vect_visited;

//    vect_visited.push_back(make_pair(1,0));
//    vect_visited.push_back(make_pair(1,2));
//    vect_visited.push_back(make_pair(5,1));

//    vector<pair<int,int>>::iterator it;

//    vector<pair<int,int>> search;
//    search.push_back(make_pair(9,0));

//    it = find(vect_visited.begin(),vect_visited.end(),search.at(0));
//    if(it != vect_visited.end())
//    {
//        cout << "Element "  <<" found at position : " ;
//        cout << it - vect_visited.begin() << " (counting from zero) \n" ;
//    }
//    else
//            std::cout << "Element not found.\n\n";

    /*Function กริยาหุ่นยนต์*/
//    robot1.goStraight();
//    robot1.turnLeft();
//    robot1.turnRight();
//    robot1.uTurn();
    /*Function กริยาหุ่นยนต์*/
    //robot1.findPath_from_CSV("D:/RobotCompass/ComPass/directionforC.csv");

    return a.exec();
}
