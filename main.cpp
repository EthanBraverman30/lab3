#include <iostream>

/* 
Create the following
Create an interactive scenario for the following. Imagine you are a teacher / lecturer and you need to determine 
the student’s scores to help you with the following.  
Deliverable:
Create an array of size 10 with numbers varying from $0-99 for the values.
Find the sum of the array. 
Find the average of the array.
Find out how many students will pass the class, condition is that the student needs a 70 or better. (Use conditionals).
Find the lowest and highest scores without the array sorted! (You will need to think about this for a bit!)
Create a video explaining your logic and run through the scenario once.
Create a simple video 1-2 minutes. 
Upload everything on GitHub.
*/
using std::cout;

int main(){
    int array[10]={92,81,63,40,99,73,78,45,0,88};
    
    //find sum:
    int sum=0;
    for (int num:array){
        sum+=num;
    }

    //find average
    double average=sum/10.0;
    
    //find how many students will pass the class
    int passed=0;
    for (int i=0; i<10; i++){
        if(array[i]>=70){
            passed+=1;
        }
    }
    
    //highest and lowest scores without sorting array
    //highest
    int highest=array[0];
    for (int i=0; i<10; i++){
        if (array[i]>highest){
            highest=array[i];
        }
    }
    //lowest
    int lowest=array[0];
    for (int i=0; i<10; i++){
        if (array[i]<lowest){
            lowest=array[i];
        }
    }

    cout << "Sum is " << sum << " and average is " << average << " and " << passed << " students passed and " << highest << " was the highest score and " << lowest << " was the lowest score";
    return 0;
}