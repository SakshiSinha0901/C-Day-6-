//counting from 1 to 100
 #include<iostream>
 using namespace std;

// int main(){
//     for (int i = 1; i <= 100;i= i+1){
//         cout<<i<<endl;
//     }
// }

//counting fron 100 to 1
// int main(){
//      for (int i = 100; i >= 1;i= i-1){
//         cout<<i<<endl;
//     }
// }

// name 50 times
// int main(){
//     for (int i = 1; i <= 50;i= i+1){
//          cout<<"Sakshi"<<endl;
//     }
// }

// counting 0 to -10
// int main(){
//     for (int i = 0; i >= -10;i= i-1){
//         cout<<i<<endl;
//     }
// }

// 7 ka table print karna hai
int main() {

    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    // run a loop from 1 to 10
    // print the multiplication table
    for (int i = 1; i <= 10; i = i+1) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}