/*
 * Terence Minerbrook
 * Homework Six
 * Question Two
 *
 * tm3639_hw6_q2
 *
 *
 * */

#include <iostream>
using namespace std;

void printPineTree(int number, char symbol);
void printShiftedTriangle(int n, int m, char symbol);

int main() {

    int number;
    char symbol;

    cout << "Enter a number for the number of trees: \n";
    cin >> number;
    cout<<"Enter a character you would like to use: \n";
    cin>>symbol;
    printPineTree((int) number,(char)symbol);




    return 0;
}

void printPineTree(int number, char symbol){
    //part b: logic and programming complete
    //now to put this in a function body
    //make it dynamic
    //replacing

    for(int h = 1; h <= number; h++) {
        int counter =0;
        counter++;
        printShiftedTriangle(number-number+counter+h, number, symbol);


    }

//this is the logic I had in the print pine tree
    /*  int counter =0;
    counter++;
    for (int i = 1;i <= h+counter ;i++) {

        for (int j = 0;j <= (number * 2); j++) {

            if (j >= number - (i - 1) && j <= number + (i - 1)) {
                cout <<symbol;
            } else {
                cout <<" ";
            }
        }

        cout << endl;
    }
}*/

}


void printShiftedTriangle(int n,int m, char symbol) {
    for (int i = 1; i <= n; i++) {
        for (int Four = m; Four >= 0; Four--) {
            cout << " ";
        }
        for (int j = 0; j <= (n * 2) - 1; j++) {
            if (j >= n - (i - 1) && j <= n + (i - 1)) {
                cout <<symbol;
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}





/*   //part b: logic and programming complete
    //now to put this in a function body
    //make it dynamic
    //replacing
    int number_prison;
    cout << "Enter a positive integer: \n";
    cin >> number_prison;

    for(int h = 1;h <= number_prison;h++) {
        int counter =0;
        counter++;
        for (int i = 0;i <= h+counter ;i++) {

            for (int j = 0;j <= (number_prison * 2); j++) {

                if (j >= number_prison - (i - 1) && j <= number_prison + (i - 1)) {
                    cout <<"#";
                } else {


                    cout <<" ";
                }

            }
            cout << endl;
        }
    }
*/








/*
//Part A:complete
void  printShiftedTriangle(int n, int m, char symbol);

int main(){
    int n, m;
    char symbol;
       cout<<"Enter a number for the number of rows: \n";
       cin>>n;
       cout<<"Enter a number for the space shift: \n";
       cin>>m;
       cout<<"Enter a character you would like to use: \n";
       cin>>symbol;
       printShiftedTriangle((int)n,(int)m,(char)symbol);

       //cout<<endl;



    return 0;
}

void printShiftedTriangle(int n,int m, char symbol) {
    for (int i = 0; i <= n; i++) {


        for (int Four = m; Four >= 0; Four--) {
            cout << " ";
        }
        for (int j = 1; j <= (n * 2) - 1; j++) {

            if (j >= n - (i - 1) && j <= n + (i - 1)) {
                cout <<symbol;
            }
            else
                {
                cout << " ";
            }
        }
        cout<<endl;
    }
}*/





/*
 * void func(int n);
int main(){
    int n = 3;
    cout<<"Before Func: "<<n<<endl;
    func(n);
    cout<<"After Func: "<< n << endl;
    return 0;
}
void func(int n){
    n = 4;
    cout<<" inside Func: " << n<< endl;
}
 * */




/*//this prints over everything i want,
 * //now make it into a function
 * //replacing the n line number
 * // replacing the Four line number
 * // replacing the symbol
 * //into inputs from cout to cin
 * for(int i=0; i<=num;i++){
            //this loop makes a set of four on
            //each line, before any logic below
            //pushing my triangle over
            for(int Four = 4;Four>=0;Four--){
                cout<<" ";
            }
            for(int j = 1; j<= num*2-1;j++){

                if(j >= num -(i -1)&& j<= num +(i - 1)){
                    cout<<"#";
                }else{


                    cout<<" ";
                }

            }cout<<endl;
        }*/



/*int numTreeOne(int num);
int main(){
    int num;
    cout<<"enter an integer number: \n";
    cin>>num;

    int functionOne;
    functionOne =numTreeOne(num);//whats in this functions
    return 0;
}
//function one
//this just produces a typical tree with sequential line output
// and odd symbol output,

int numTreeOne(int num){
    for(int i =1; i <= num;i++){
        for(int j=1; j<=num*2 - 1;j++)
            if(j >= num -(i -1)&& j<= num +(i - 1)){
                cout<<"+";
            }
            else{
                cout<<" ";
            }
        cout<<endl;

    }
    //for(int i=0;i<=num;i++)
        //for(int j =0; j<=0;j++)
            //cout<<"#";
            return num;




}*/


/*//n choose k function from class modules

int factorial(int num);
int main() {
    int n,k,k_comb;
    int n_fact,k_fact,n_k_fact;
    cout<<"Please enter n and k"<<endl;
    cin>>n>>k;

    n_fact=factorial(n); //these assignments place the
    k_fact=factorial(k);//cinned elements into the factorial function
    n_k_fact= factorial(n-k);

    k_comb = n_fact/(k_fact * n_k_fact);

    cout << n << " choose "<< k <<" is ";
    cout<<k_comb<<endl;
    return 0;
}
int factorial(int num){
    int fact_res,i;
    fact_res =1;
    for(i=1;i<=num;i++)
        fact_res*=i;
    return fact_res;
}
*/


/*  //tree maker


     int rowNumber;
     rowNumber=0;

    cout<<"triangle of increasing size: enter the number of levels: \n";
    cin>>rowNumber;



    for(int i =1; i <= rowNumber;i++){
        for(int j=1; j<=rowNumber*2 - 1;j++)
            if(j >= rowNumber -(i -1)&& j<= rowNumber +(i - 1)){
                cout<<"+";
            }
        else{
            cout<<" ";
        }
           cout<<endl;

    }
*/