#include <iostream>
using namespace std;
//for loop
//counting fron 1 to 5
 
// int main(){
//     for(int i = 1; i<=10;i=i+1){
//         cout<<i<<endl;
//     }
// }

//break in loops
// int main(){
//     for(int i = 1; i<=10;i=i+1){
//         cout<<i<<"";
//         if (i==5){
//             break;
//         }
//     }
// }

//continue in loop
// int main(){
//     for(int i = 1; i<=5;i=i+1){
        
//         if (i==3){
//             continue;;
//         }
//         cout<<i<<"";
//     }
//     return 0;

// }

//while loop
int main(){
    int i= 1;
    while(i<=5){
        cout<< i <<"";
        i = i+1;
    }
    return 0;
}

//do while loop
// int main(){
//     int count= 10;

//     int i = 1;
//     do{
//         cout<<"Sakshi"<<"";
//         i= i+1;
//     }while (i<=count);
// }

//nested loop
int main(){
    for(int i = 1; i<=2; i= i+1){
        for(int j=1; j<=2; j= j+1){
            cout <<i*j<<"";
        }
    }
    return 0;
}
