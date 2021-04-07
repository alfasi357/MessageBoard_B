#include <iostream>
#include <unordered_map>
#include "Direction.hpp"
#include "Board.hpp"
using namespace ariel;
#include <string>
#include <stdexcept>
using namespace std;

namespace ariel{

        
            void Board::post(unsigned int y, unsigned int x, Direction d, std::string str){
                if(x<min_x){
                    min_x=x;}
                if(y<min_y){
                    min_y=y;}    
                if (d==ariel::Direction::Horizontal){
                  for(unsigned int i=0;i<str.size();i++){
                    point[y][x++]=str[i];  
                  }
                }
                else{
                   for(unsigned int i=0;i<str.size();i++){
                        point[y++][x]=str[i];
                }

}
                if(x>max_x){
                    max_x=x;}
                if(y>max_y){
                    max_y=y;}    

            }

string Board::read(unsigned int y, unsigned int x, Direction d, unsigned int num){
    string ans;
     if (d==ariel::Direction::Horizontal){
         for(unsigned int i=0; i<num; i++){
             if(point.find(y)!=point.end()){
                if(point[y].find(x+i)==point[y].end()){
                    ans+="_";
             }
                else{
                    ans+=point[y][x+i];}
         }
             else{
                 ans+="_";
             }
         }
     }
     else
        {
         for(unsigned int i=0; i<num; i++){
             if(point.find(y+i)!=point.end()){
                if(point[y+i].find(x)==point[y+i].end()){
                    ans+="_";
             }
                else{
                    ans+=point[y+i][x];}
         }
             else{
                 ans+="_";
             }        
         }
        }
    return ans;
}

void Board::show(){
    for(unsigned int i=min_y;i<max_y;i++){
        for(unsigned int j=min_x;j<max_x;j++){
           if(point.find(i)!=point.end()){
               if(point[i].find(j)!=point[i].end()){
                    cout<<point[i][j]<<endl;}
           }
           else{
                cout<<'_'<<endl;}
        }
        cout<<'\n'<<endl;
        
    }
       
   } 

    
}
