#include"iostream"
using namespace std;
class Hello{
protected:
    string title;
    float rating;
public:
    Hello (string str ,float r){
    title=str;
    rating=r;
    }
    virtual void display()=0;
};
class HelloVideo:public Hello{
float videolength;
public:
    HelloVideo(string str,float r,float v1):Hello(str,r){
    videolength=v1;
    }
    void display(){
    cout<<"This is an amzing video with title"<<title<<endl;
       cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
          cout<<"Length of this video is :"<<videolength<<" minutes"<<endl;
    }

};
class HelloText:public Hello{
int words;
public:
    HelloText(string str,float r,int wc):Hello(str,r){
    words=wc;
    }
    void display(){
    cout<<"This is an amzing video with title"<<title<<endl;
       cout<<"Ratings of The Text toutorial is : "<<rating<<" out of 5 stars"<<endl;
          cout<<"Length of this Text Toutorial is :"<<words<<" words"<<endl;
    }

};
int main(){
string title;
float rating,videoLength;
int words;
title=" Django Toutorials";
videoLength=99;
rating=4.9;
 HelloVideo djVideo(title,rating,videoLength);

 title= " Django Toutorials Text";
words=999;
rating=4.91;
 HelloText djText(title,rating,words);
 Hello *tuts[2];
 tuts[0]=&djVideo;
 tuts[1]=&djText;
 tuts[0]->display();
 tuts[1]->display();
 return 0;

}

