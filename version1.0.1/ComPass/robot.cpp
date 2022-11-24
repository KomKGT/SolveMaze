#include "robot.h"


Robot::Robot(int front, int back, int left, int right,int row,int collumn) //N = 1 ,S = -1,E = 2,W = -2
{
    this->direction.front = front;
    this->direction.back =  back;
    this->direction.left = left;
    this->direction.right = right;
    this->pose.row = row;
    this->pose.col = collumn;
    visited.vector_visited.push_back(make_pair(pose.row,pose.col));
}

void Robot::goStraight()
{
    if((this->direction.front == 1) && (this->direction.back == -1) && (this->direction.left == -2) && (this->direction.right == 2))
    {
        //-row
        //this->row = this->row -1;
        pose.row = this->pose.row-1;
    }
    else if((this->direction.front == -1) && (this->direction.back == 1) && (this->direction.left == 2) && (this->direction.right == -2))
    {
        //+row
        //this->row = this->row +1;
        pose.row = this->pose.row +1;
    }
    else if((this->direction.front == 2) && (this->direction.back == -2) && (this->direction.left == 1) && (this->direction.right == -1))
    {
        //+collumn
        //this->collumn = this->collumn +1;
        pose.col = this->pose.col+1;
    }
    else if((this->direction.front == -2) && (this->direction.back == 2) && (this->direction.left == -1) && (this->direction.right == 1))
    {
        //-collumn
        //this->collumn = this->collumn-1;
        pose.col = this->pose.col-1;
    }
    visited.vector_visited.push_back(make_pair(pose.row,pose.col));
}

void Robot::turnLeft()
{
    if((this->direction.front == 1) && (this->direction.back == -1) && (this->direction.left == -2) && (this->direction.right == 2))
    {
        this->direction.front = -2;
        this->direction.back = 2;
        this->direction.left =-1;
        this->direction.right =1;
    }
    else if((this->direction.front == -1) && (this->direction.back == 1) && (this->direction.left == 2) && (this->direction.right == -2))
    {
        this->direction.front = 2;
        this->direction.back = -2;
        this->direction.left =1;
        this->direction.right =-1;
    }
    else if((this->direction.front == 2) && (this->direction.back == -2) && (this->direction.left == 1) && (this->direction.right == -1))
    {
        this->direction.front = 1;
        this->direction.back = -1;
        this->direction.left =-2;
        this->direction.right =2;
    }
    else if((this->direction.front == -2) && (this->direction.back == 2) && (this->direction.left == -1) && (this->direction.right == 1))
    {
        this->direction.front = -1;
        this->direction.back = 1;
        this->direction.left =2;
        this->direction.right =-2;
    }
    else
    {
        cout<<"\nYour Constructor are wrong!!";
        return;
    }
    goStraight();
}

void Robot::turnRight()
{
    if((this->direction.front == 1) && (this->direction.back == -1) && (this->direction.left == -2) && (this->direction.right == 2))
    {
        this->direction.front = 2;
        this->direction.back = -2;
        this->direction.left =1;
        this->direction.right =-1;
    }
    else if((this->direction.front == -1) && (this->direction.back == 1) && (this->direction.left == 2) && (this->direction.right == -2))
    {
        this->direction.front = -2;
        this->direction.back = 2;
        this->direction.left =-1;
        this->direction.right =1;
    }
    else if((this->direction.front == 2) && (this->direction.back == -2) && (this->direction.left == 1) && (this->direction.right == -1))
    {
        this->direction.front = -1;
        this->direction.back = 1;
        this->direction.left =2;
        this->direction.right =-2;
    }
    else if((this->direction.front == -2) && (this->direction.back == 2) && (this->direction.left == -1) && (this->direction.right == 1))
    {
        this->direction.front = 1;
        this->direction.back = -1;
        this->direction.left =-2;
        this->direction.right =2;
    }
    else
    {
        cout<<"\nYour Constructor are wrong!!";
        return;
    }
    goStraight();
}

void Robot::uTurn()
{
    if((this->direction.front == 1) && (this->direction.back == -1) && (this->direction.left == -2) && (this->direction.right == 2))
    {
        this->direction.front = -1;
        this->direction.back = 1;
        this->direction.left = 2;
        this->direction.right = -2;
    }
    else if((this->direction.front == -1) && (this->direction.back == 1) && (this->direction.left == 2) && (this->direction.right == -2))
    {
        this->direction.front = 1;
        this->direction.back = -1;
        this->direction.left =-2;
        this->direction.right =2;
    }
    else if((this->direction.front == 2) && (this->direction.back == -2) && (this->direction.left == 1) && (this->direction.right == -1))
    {
        this->direction.front = -2;
        this->direction.back = 2;
        this->direction.left =-1;
        this->direction.right =1;
    }
    else if((this->direction.front == -2) && (this->direction.back == 2) && (this->direction.left == -1) && (this->direction.right == 1))
    {
        this->direction.front = 2;
        this->direction.back = -2;
        this->direction.left =1;
        this->direction.right =-1;
    }
    else
    {
        cout<<"\nYour Constructor are wrong!!";
        return;
    }
    goStraight();
}

Robot Robot::getPose()
{
    //Robot pose(this->front,this->back,this->left,this->right,this->row,this->collumn);
    Robot pose(this->direction.front,this->direction.back,this->direction.left,this->direction.right,this->pose.row,this->pose.col);
    return pose;
}

QString Robot::getDirection() //บอกทิศหน้าหุ่นยนต์
{
    if((this->direction.front == 1) && (this->direction.back == -1) && (this->direction.left == -2) && (this->direction.right == 2))
    {
        return "North";
    }
    else if((this->direction.front == -1) && (this->direction.back == 1) && (this->direction.left == 2) && (this->direction.right == -2))
    {
        return "South";
    }
    else if((this->direction.front == 2) && (this->direction.back == -2) && (this->direction.left == 1) && (this->direction.right == -1))
    {
        return "East";
    }
    else
    {
        return "West";
    }
}

void Robot::findPath_from_CSV(QString file_name)
{
     QFile inputFile(file_name);
     int L;
     int F;
     int R ;
     if(inputFile.open(QIODevice::ReadOnly))
     {
         QTextStream in(&inputFile);
         int line_counter = 0;

         while(!in.atEnd())
         {
             if(line_counter == 0)
             {
                 in.readLine();
             }
             else if(line_counter == 1)
             {
                 QStringList items = in.readLine().split(',');

                 L = items.at(2).toUInt(); // 0 or 1
                 F = items.at(3).toUInt(); // 0 or 1
                 R = items.at(4).toUInt(); // 0 or 1

//                 prior_dir.v_dir.push_back(L);
//                 prior_dir.v_dir.push_back(F);
//                 prior_dir.v_dir.push_back(R);
                 break;
             }
             line_counter++;
         }
         inputFile.close();
//         return compass.top();


         if(this->direction.front == 1)
         {
            int r_F = this->pose.row-1;
            int c_F = this->pose.col;

            int r_R = this->pose.row;
            int c_R = this->pose.col+1;

            int r_L = this->pose.row;
            int c_L = this->pose.col-1;


            if((F == 1) && (isVisited(r_F,c_F)==false)) //N 22/11/2022 เปลี่ยนจาก "F == 1" เป็น "it == visited.vector_visited.end()"
            {
                goStraight();
                cout<<"GS";
            }
            else if((R == 1) && (isVisited(r_R,c_R)==false)) //E
            {
                turnRight();
                cout<<"TR";
            }
            else if((L == 1) && (isVisited(r_L,c_L)==false)) //W
            {
                turnLeft();
                cout<<"TL";
            }
            else if((F==0)&&(R==0)&&(L==0))//case ตันทุกทาง
            {
                uTurn();
                cout<<"all tun";
                cout<<"UT";
            }
            else if( ((F == 1) && (isVisited(r_F,c_F)==true)) || ((R == 1) && (isVisited(r_R,c_R)==true)) || ((L == 1) && (isVisited(r_L,c_L)==true))) // case เคยไปทุกเส้นทาง
            {
//             pop stack
                uTurn();
                cout<<"all visited";
                cout<<"UT";
            }
         }
         else if(this->direction.front == 2)
         {
             int r_L = this->pose.row-1;
             int c_L = this->pose.col;

             int r_F = this->pose.row;
             int c_F = this->pose.col + 1;

             int r_R = this->pose.row + 1;
             int c_R = this->pose.col;

             if((L == 1) && (isVisited(r_L,c_L)==false)) //N
             {
                 turnLeft();
                 cout<<"TL";
             }
             else if((F == 1) && (isVisited(r_F,c_F)==false)) //E
             {
                 goStraight();
                 cout<<"GS";
             }
             else if((R == 1) && (isVisited(r_R,c_R)==false)) //S
             {
                 turnRight();
                 cout<<"TR";
             }
             else if((F==0)&&(R==0)&&(L==0))//case ตันทุกทาง
             {
                 uTurn();
                 cout<<"all tun";
                 cout<<"UT";
             }
             else if((isVisited(r_F,c_F)==true)&&(isVisited(r_R,c_R)==true)&&(isVisited(r_L,c_L)==true)) // case เคยไปทุกเส้นทาง
             {
             // pop stack
                 uTurn();
                 cout<<"all visited";
                 cout<<"UT";
             }
         }
         else if(this->direction.front == -1)
         {
             int r_L = this->pose.row;
             int c_L = this->pose.col+1;

             int r_F = this->pose.row+1;
             int c_F = this->pose.col;

             int r_R = this->pose.row;
             int c_R = this->pose.col-1;

             if((L == 1) && (isVisited(r_L,c_L)==false))  //E
             {
                 turnLeft();
                 cout<<"TL";
             }
             else if((F == 1) && (isVisited(r_F,c_F)==false)) //S
             {
                 goStraight();
                 cout<<"GS";
             }
             else if((R == 1) && (isVisited(r_R,c_R)==false)) //W
             {
                 turnRight();
                 cout<<"TR";
             }
             else if((F==0)&&(R==0)&&(L==0)) //case ตันทุกทาง
             {
                 uTurn();
                 cout<<"all tun";
                 cout<<"UT";
             }
             else if((isVisited(r_F,c_F)==true)&&(isVisited(r_R,c_R)==true)&&(isVisited(r_L,c_L)==true)) // case เคยไปทุกเส้นทาง
             {
              //pop stack
                 uTurn();
                 cout<<"all visited";
                 cout<<"UT";
             }
         }
         else if(this->direction.front == -2)
         {
             int r_R = this->pose.row -1;
             int c_R = this->pose.col;

             int r_L = this->pose.row +1;
             int c_L = this->pose.col;

             int r_F = this->pose.row;
             int c_F = this->pose.col-1;

             if((R == 1) && (isVisited(r_R,c_R)==false)) //N
             {
                 turnRight();
                 cout<<"TR";
             }
             else if((L == 1) && (isVisited(r_L,c_L)==false)) //S
             {
                 turnLeft();
                 cout<<"TL";
             }
             else if((F == 1) && (isVisited(r_F,c_F)==false)) //W
             {
                 goStraight();
                 cout<<"GS";
             }
             else if((F==0)&&(R==0)&&(L==0)) //case ตันทุกทาง
             {
                 uTurn();
                 cout<<"all tun";
                 cout<<"UT";
             }
             else if((isVisited(r_F,c_F)==true)&&(isVisited(r_R,c_R)==true)&&(isVisited(r_L,c_L)==true)) // case เคยไปทุกเส้นทาง
             {
              //pop stack
                 uTurn();
                 cout<<"all visited";
                 cout<<"UT";
             }
         }
          //return *max_element(prior_dir.v_dir.begin(),prior_dir.v_dir.end());

     }
     else if(!inputFile.open(QIODevice::ReadOnly))
     {
         cout<<"ERROR";
     }

}

bool Robot::isVisited(int row,int col)
{
    QVector<pair<int, int> > search;
    search.push_back(make_pair(row,col));
    QVector<pair<int,int>>::iterator it;
    it = find(visited.vector_visited.begin(),visited.vector_visited.end(),search.at(0));
    if(it != visited.vector_visited.end())
        return true;
    else
        return false;
}



