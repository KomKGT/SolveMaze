#include "robot.h"


Robot::Robot(int front, int back, int left, int right,int row,int collumn) //N = 1 ,S = -1,E = 2,W = -2
{
    this->direction.front = front;
    this->direction.back =  back;
    this->direction.left = left;
    this->direction.right = right;
    this->pose.row = row;
    this->pose.col = collumn;
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
            if(F == 1) //N
            {
                goStraight();
                cout<<"GS";
            }
            else if(R == 1) //E
            {
                turnRight();
                cout<<"TR";
            }
            else if(L == 1) //W
            {
                turnLeft();
                cout<<"TL";
            }
            else if((F==0)&&(R==0)&&(L==0))
            {
                uTurn();
                cout<<"UT";
            }
         }
         else if(this->direction.front == 2)
         {
             if(L == 1) //N
             {
                 turnLeft();
                 cout<<"TL";
             }
             else if(F == 1) //E
             {
                 goStraight();
                 cout<<"GS";
             }
             else if(R == 1) //S
             {
                 turnRight();
                 cout<<"TR";
             }
             else if((F==0)&&(R==0)&&(L==0))
             {
                 uTurn();
                 cout<<"UT";
             }
         }
         else if(this->direction.front == -1)
         {
             if(L == 1)
             {
                 turnLeft();
                 cout<<"TL";
             }
             else if(F == 1)
             {
                 goStraight();
                 cout<<"GS";
             }
             else if(R == 1)
             {
                 turnRight();
                 cout<<"TR";
             }
             else if((F==0)&&(R==0)&&(L==0))
             {
                 uTurn();
                 cout<<"UT";
             }
         }
         else if(this->direction.front == -2)
         {
             if(R == 1)
             {
                 turnRight();
                 cout<<"TR";
             }
             else if(L == 1)
             {
                 turnLeft();
                 cout<<"TL";
             }
             else if(F == 1)
             {
                 goStraight();
                 cout<<"GS";
             }
             else if((F==0)&&(R==0)&&(L==0))
             {
                 uTurn();
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

int Robot::transform_to_direction(int Path)
{
    if(Path == 1)
    {
        return -2;
    }
    else if(Path == 2)
    {
        return -1;
    }
    else if(Path == 3)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
