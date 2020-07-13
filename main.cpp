#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <sstream>
#include <cmath>
using namespace std;

void matrix_fn(string mat,int&r,int&c,int&isSquare,int&isERROR);

int main()
{
   string mat1,mat2,mat3;
   int r=0,c=0,isSquare=0,isERROR=0,

   rows1=0,rows2,columns1=0,columns2=0,

   square1=0,square2=0,

   error2=0,error1=0;

   int space1=0,semi1=0,space2=0,semi2=0;

    getline(cin,mat1);
    matrix_fn(mat1,r,c,isSquare,isERROR);
    rows1=r;
    columns1=c;
    float matrix1[rows1][columns1]={};
    square1=isSquare;
    error1=isERROR;
    if(square1==1)
    //cout<<"SQUARE"<<endl;
    if(error1==1)
    cout<<"ERROR";
////////////////////////////////////////////
if(error1!=1)
{
string arr1[rows1][columns1]={};
int index=1,index2=1,test1=0,test2=0;
space1=mat1.find(" ");
semi1=mat1.find(";");
if(semi1!=-1 && space1!=-1)
{
  for(int i=0;i<rows1;i++)
 {   test2=0;
    for(int j=0;j<columns1;j++)
    {
        space1=mat1.find(" ",index);
        semi1=mat1.find(";",index2);
        for(int k=index;k<space1;k++)
        {
          if(mat1[k]==';')
          {
            arr1[i][j]=mat1.substr(index,(k-index));
            index2=k+1;
            test1=1;test2=1;
          }
        }
        if(test1==0){arr1[i][j]=mat1.substr(index,(space1-index));}
        if(test1==1){index=semi1+1;}
        else{index=space1+1;}
        test1=0;
        if(test2==1) break;
    }
 }
}
else if(semi1==-1)
{
    int space1=0;
    for(int i=0;i<rows1;i++)
    {
            for(int j=0;j<columns1;j++)
       {
           if(space1==-1)
           {
             arr1[0][columns1-1]=mat1.substr((space1+1),(mat1.size()-(space1+1)));
             break;
           }
           space1=mat1.find(" ",index);
           arr1[i][j]=mat1.substr(index,(space1-index));
           index=space1+1;
       }
    }
}
else if(space1==-1)
{
   semi1=0;
    for(int i=0;i<rows1;i++)
    {
            for(int j=0;j<columns1;j++)
       {
           if(semi1==-1)
           {
             arr1[0][columns1-1]=mat1.substr((semi1+1),(mat1.size()-(semi1+1)));
             break;
           }
           semi1=mat1.find(";",index);
           arr1[i][j]=mat1.substr(index,(semi1-index));
           index=semi1+1;
       }
    }
}
string last=arr1[rows1-1][columns1-1];
int size1=last.size();
arr1[rows1-1][columns1-1]=last.substr(0,size1-1);
string v;
float d;
for(int i=0;i<rows1;i++)
{
    for(int j=0;j<columns1;j++){v=arr1[i][j];d=atof(v.c_str());matrix1[i][j]=d;}
}

cout<<"rows1: "<<rows1<<endl;
cout<<"columns1 : "<<columns1<<endl;
cout<<"Matrix1"<<"("<<rows1<<"x"<<columns1<<")"<<endl;

for(int i=0;i<rows1;i++){ for(int j=0;j<columns1;j++){cout<<matrix1[i][j]<<" ";}
    cout<<"\n";}

}

////////////////////////////////////////////////////////////////////////////////////////////////////
string op;
int op_error=0;
getline(cin,op);
if(op=="+") op_error=0;
else if(op=="-") op_error=0;
else if(op=="*") op_error=0;
else    cout<<"ERROR";

////////////////////////////////////////////////////////////////////////////////////////////////////

    getline(cin,mat2);
    r=0;c=0;
    matrix_fn(mat2,r,c,isSquare,isERROR);
    rows2=r;
    columns2=c;
    square2=isSquare;
    error2=isERROR;
   float matrix2[rows2][columns2]={};
    if(square2==1)
    //cout<<"SQUARE"<<endl;
    if(error2==1)
    cout<<"ERROR";
if(error2!=1)
{
  string arr2[rows2][columns2]={};
int  index=1,index2=1,test1=0,test2=0;
space2=mat2.find(" ");
semi2=mat2.find(";");
if(semi2!=-1 && space2!=-1)
{
  for(int i=0;i<rows2;i++)
 {   test2=0;
    for(int j=0;j<columns2;j++)
    {
        space2=mat2.find(" ",index);
        semi2=mat2.find(";",index2);
        for(int k=index;k<space2;k++)
        {
          if(mat2[k]==';')
          {
            arr2[i][j]=mat2.substr(index,(k-index));
            index2=k+1;
            test1=1;test2=1;
          }
        }
        if(test1==0){arr2[i][j]=mat2.substr(index,(space2-index));}
        if(test1==1){index=semi2+1;}
        else{index=space2+1;}
        test1=0;
        if(test2==1) break;
    }
 }
}
else if(semi2==-1)
{
    int space2=0;
    for(int i=0;i<rows2;i++)
    {
            for(int j=0;j<columns2;j++)
       {
           if(space2==-1)
           {
             arr2[0][columns2-1]=mat2.substr((space2+1),(mat2.size()-(space2+1)));
             break;
           }
           space2=mat2.find(" ",index);
           arr2[i][j]=mat2.substr(index,(space2-index));
           index=space2+1;
       }
    }
}
else if(space2==-1)
{
   semi2=0;
    for(int i=0;i<rows2;i++)
    {
            for(int j=0;j<columns2;j++)
       {
           if(semi2==-1)
           {
             arr2[0][columns2-1]=mat2.substr((semi2+1),(mat2.size()-(semi2+1)));
             break;
           }
           semi2=mat2.find(";",index);
           arr2[i][j]=mat2.substr(index,(semi2-index));
           index=semi2+1;
       }
    }
}
string last2=arr2[rows2-1][columns2-1];
int size2=last2.size();
arr2[rows2-1][columns2-1]=last2.substr(0,size2-1);
string v2;
float d2;
for(int i=0;i<rows2;i++)
{
    for(int j=0;j<columns2;j++)
        {
            v2=arr2[i][j];
            d2=atof(v2.c_str());
            matrix2[i][j]=d2;
         }
}



cout<<"rows2: "<<rows2<<endl;
cout<<"columns2 : "<<columns2<<endl;
cout<<"Matrix2"<<"("<<rows2<<"x"<<columns2<<")"<<endl;

for(int i=0;i<rows2;i++){ for(int j=0;j<columns2;j++){cout<<matrix2[i][j]<<" ";}
    cout<<"\n";}


}
else cout<<"ERROR";



///////////////////////////////////////////////////////////////////////////////////////

if(op=="+")
{
    float matrix3[rows1][columns1]={};
    if(rows1==rows2 && columns1==columns2)
    {
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns1;j++)
            {
                matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
               /*cout<<"rows3: "<<rows1<<endl;
               cout<<"columns3 : "<<columns1<<endl;
               cout<<"Matrix3"<<"("<<rows1<<"x"<<columns1<<")"<<endl;
        for(int i=0;i<rows1;i++){ for(int j=0;j<columns1;j++){cout<<matrix3[i][j]<<" ";}
    cout<<"\n\n";}
    */
    cout<<"[";
for(int i=0;i<rows1;i++)
{
    for(int j=0;j<columns1;j++)
    {
        cout<<matrix3[i][j];
        if((j==columns1-1)&&(i!=rows1-1)) cout<<";";
        else if((j==columns1-1)&&(i==rows1-1)){cout<<"]";}
        else
        {
          cout<<" ";
        }
    }
 }
    }
    else cout<<"ERROR";
////////////////////////////////////////

  /*
float d3;
string v3;
for(int i=0;i<rows1;i++)
 {
    for(int j=0;j<columns1;j++)
        {
            d3=matrix3[i][j];
            ostringstream ss;
            ss << d3;
            mat3=ss.str();
         }
 }
    */

 }  // if +
////////////////////////////////////////

///////////////////////////////////////
else if(op=="-")
{
    float matrix3[rows1][columns1]={};
    if(rows1==rows2 && columns1==columns2)
    {
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns1;j++)
            {
                matrix3[i][j]=matrix1[i][j]-matrix2[i][j];
            }
        }

               /*cout<<"rows3: "<<rows1<<endl;
               cout<<"columns3 : "<<columns1<<endl;
               cout<<"Matrix3"<<"("<<rows1<<"x"<<columns1<<")"<<endl;
        for(int i=0;i<rows1;i++){ for(int j=0;j<columns1;j++){cout<<matrix3[i][j]<<" ";}
        cout<<"\n";}*/
         cout<<"[";
for(int i=0;i<rows1;i++)
{
    for(int j=0;j<columns1;j++)
    {
        cout<<matrix3[i][j];
        if((j==columns1-1)&&(i!=rows1-1)) cout<<";";
        else if((j==columns1-1)&&(i==rows1-1)){cout<<"]";}
        else
        {
          cout<<" ";
        }
    }
 }
    }
    else cout<<"ERROR"<<endl;

}
////////////////////////////////////////////////////////

/////////////////
else if(op=="*")
{
    float matrix3[rows1][columns2]={};
    if(columns1==rows2)
    {
         for(int i=0;i<rows1;i++)
       {
             for(int j=0;j<columns2;j++)
          {
               for(int k=0;k<columns1;k++)
            {
                 matrix3[i][j]+=matrix1[i][k]* matrix2[k][j];
            }

          }
   }

               cout<<"rows3: "<<rows1<<endl;
               cout<<"columns3 : "<<columns2<<endl;
               cout<<"Matrix3"<<"("<<rows1<<"x"<<columns2<<")"<<endl;
        for(int i=0;i<rows1;i++){ for(int j=0;j<columns2;j++){cout<<matrix3[i][j]<<" ";}
        cout<<"\n";}


    }

else cout<<"ERROR";
}




/////////////////////////////////////////////////////////////////////////////////////////

return 0;

}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void matrix_fn(string mat,int&r,int&c,int&isSquare,int&isERROR)
{
    int len=mat.size();
    int semi_index=mat.find(";");
    int semi=0,space=0;
    for(int i =1;i<len-2;i++){if(mat[i]==';')semi++; if(mat[i]==' ')space++;}
    r=semi+1; c=0 ;
    if(semi_index!=-1){for(int i =1;i<semi_index;i++){if(mat[i]==' ') c++;} c=c+1;}
    else{c=space+1;}
    isSquare=0;
    if(r==c)isSquare=1;
    isERROR=0;
    if(space/2==(c/2+1))isERROR=1; //mismatch

    if(mat[0]!='[' || mat[len-1]!=']')
    if(mat[1]==';' || mat[1]==' ' )isERROR=1;
    if(mat[len-2]==';')isERROR=1;
    if(mat[len-2]==' ')isERROR=1;
    for(int i =0;i<len-1;i++)
    {

        if(mat[i]==';')
        {
          if(mat[i+1]==';') isERROR=1;
        }
        if(mat[i]==' ')
        {
          if(mat[i+1]==' ') isERROR=1;
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





