#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;



int main() {


    bool condition=true;
    string input_key;
    string player1;
    string player2;
    string K[9];
    K[0] = "1";
    K[1] = "2";
    K[2] = "3";
    K[3] = "4";
    K[4] = "5";
    K[5] = "6";
    K[6] = "7";
    K[7] = "8";
    K[8] = "9";


    cout << "donner le nom du premier player: "<<endl;
    cin >> player1;
    cout << "donner le nom du deuxieme player: "<<endl;
    cin >> player2;

    cout <<endl<< "        |        |        " << endl;
    cout << "    " << K[0] << "   |    " << K[1] << "   |    " << K[2] << "   " << endl;
    cout << "        |        |        " << endl;
    cout << "---------------------------" << endl;
    cout << "        |        |        " << endl;
    cout << "    " << K[3] << "   |    " << K[4] << "   |    " << K[5] << "   " << endl;
    cout << "        |        |        " << endl;
    cout << "---------------------------" << endl;
    cout << "        |        |        " << endl;
    cout << "    " << K[6] << "   |    " << K[7] << "   |    " << K[8] << "   " << endl;
    cout << "        |        |        " << endl;

    cout << player1 << " est le X " << endl;
    cout << player2 << " est le O " << endl;

    while( //1==2==3  4==5==6 7==8==9
            K[0]!=K[1] && K[1]!=K[2] || K[3]!=K[4] && K[4]!=K[5] || K[3]!=K[4] && K[4]!=K[5] ||
            //1==4==7 2==5==8 3==6==9
            K[0]!=K[3] && K[3]!=K[6] || K[1]!=K[4] && K[4]!=K[7] || K[2]!=K[5] && K[5]!=K[8] ||
            //1==5==9  3==5==7
            K[0]!=K[4] && K[4]!=K[8] || K[2]!=K[4] && K[4]!=K[6]
            ){
        cout << player1 << " donner votre position: "<<endl;
        cin >> input_key;
        condition=true;
        while(condition) {
            if(K[stoi(input_key)]!="X" ||K[stoi(input_key)]!="O") {

                if (input_key == "1")
                    K[0] = "X";
                if (input_key == "2")
                    K[1] = "X";
                if (input_key == "3")
                    K[2] = "X";
                if (input_key == "4")
                    K[3] = "X";
                if (input_key == "5")
                    K[4] = "X";
                if (input_key == "6")
                    K[5] = "X";
                if (input_key == "7")
                    K[6] = "X";
                if (input_key == "8")
                    K[7] = "X";
                if (input_key == "9")
                    K[8] = "X";


                condition= false;
            }

        }
        cout << player2 << " donner votre position: "<<endl;
        cin >> input_key;
        condition=true;
        while(condition) {
            if(K[stoi(input_key)]!="X" ||K[stoi(input_key)]!="O") {

                if (input_key == "1")
                    K[0] = "O";
                if (input_key == "2")
                    K[1] = "O";
                if (input_key == "3")
                    K[2] = "O";
                if (input_key == "4")
                    K[3] = "O";
                if (input_key == "5")
                    K[4] = "O";
                if (input_key == "6")
                    K[5] = "O";
                if (input_key == "7")
                    K[6] = "O";
                if (input_key == "8")
                    K[7] = "O";
                if (input_key == "9")
                    K[8] = "O";


                condition= false;
            }

        }
cout<<endl<<endl<<"**********************PLAYING**************************"<<endl<<endl;
        cout << endl << "        |        |        " << endl;
        cout << "    " << K[0] << "   |    " << K[1] << "   |    " << K[2] << "   " << endl;
        cout << "        |        |        " << endl;
        cout << "---------------------------" << endl;
        cout << "        |        |        " << endl;
        cout << "    " << K[3] << "   |    " << K[4] << "   |    " << K[5] << "   " << endl;
        cout << "        |        |        " << endl;
        cout << "---------------------------" << endl;
        cout << "        |        |        " << endl;
        cout << "    " << K[6] << "   |    " << K[7] << "   |    " << K[8] << "   " << endl;
        cout << "        |        |        " << endl;





    }
}
