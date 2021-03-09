#include <iostream>
#include <stdexcept>

#include "snowman.hpp"
#include <string>
#include "doctest.h"

using namespace std;

/*
    Here I decided to make every "organ" of the snowman in constant value.
    when building the snowman i only use the generic format and put the constant in, in depend on the input.
*/
// Head option's.
const string H1 =  "\n _===_ \n";
const string H2 =  "\n  ___  \n ..... \n";
const string H3 =  "\n   _   \n  /_\\  \n";
const string H4 =  "\n  ___  \n (_*_) \n";

//Nose option's.
const string N1 = ",";
const string N2 = ".";
const string N3 = "_";
const string N4 = " ";

//Left eye option's.
const string L1 = ".";
const string L2 = "o";
const string L3 = "O";
const string L4 = "-";

//Top\Bottom left hand option's.
const string X1T = " ";
const string X1B = "<";
const string X2T = "\\";
const string X2B = " ";
const string X3T = " ";
const string X3B = "/";
const string X4T = " ";
const string X4B = " ";

//Top\Bottom right hand option's.
const string Y1T = " \n";
const string Y1B = ">\n";
const string Y2T = "/\n";
const string Y2B = " \n";
const string Y3T = " \n";
const string Y3B = "\\\n";
const string Y4T = " \n";
const string Y4B = " \n";

//Torso option's.
const string T1 = "( : )";
const string T2 = "(] [)";
const string T3 = "(> <)";
const string T4 = "(   )";

//Base option's.
const string B1 = " ( : )";
const string B2 = " (\" \")";
const string B3 = " (___)";
const string B4 = " (   )";


namespace ariel{
    std::string snowman(int num){
        
        //To check that our number is valid, it would be easier if we will convert it to string.
        string num_s = to_string(num);
        
        //We need to check that our number we got is valid.
        
        //First we check the length of the input.
        if(num_s.length() != 8)
        {
            throw("Input length is not valid!");
        }
        //Great, we know that the input length is valid.

        //Now, we check the content of the input.
        //ASCII values of the digits 1->4 is 49->52 respectively.
        for(int i=0; i<num_s.length(); i++){
            if((num_s[i] < 49) || (num_s[i] > 52)){
                throw("Some digit is out of bounds!");
            }
        }
        //Great, we know that the digit's are valid.

        //If we got here, we can be sure that the input is valid, and we can generate from it a snowman!
        //The generic input that we going to use is: HNLRXYTB. 
        
        //To adjust it to our constant "organs" it will look like this:
        //H(num_s[0]) + X(num_s[3])T + "(" + L(num_s[2]) + N(num_s[1]) + L(num_s[2]) + ")" + Y(num_s[5])T + X(num_s[3])B + T(num_s[6]) + Y(num_s[])B + B(num_s[7]).

        string snowman = "";
        string H ="";
        string N ="";
        string L ="";
        string R ="";
        string XB ="";
        string XT ="";
        string YB ="";
        string YT ="";
        string T ="";
        string B ="";

        
        for(int i=0; i<num_s.length(); i++){
            switch(i)
            {
                //first digit(H)
                case 0:
                    switch(num_s[i])
                    {
                        //H1
                        case (49):
                            H = H1;
                            break;
                        //H2
                        case (50):
                            H = H2;
                            break;
                        //H3
                        case (51):
                            H = H3;
                            break;
                        //H4
                        case (52):
                            H = H4;
                            break;
                    }
                    break;
                //second digit(N)
                case 1:
                    switch(num_s[i])
                    {
                        //N1
                        case (49):
                            N = N1;
                            break;
                        //N2
                        case (50):
                            N = N2;
                            break;
                        //N3
                        case (51):
                            N = N3;
                            break;
                        //N4
                        case (52):
                            N = N4;
                            break;
                    }
                    break;
                //third digit(L)
                case 2:
                    switch(num_s[i])
                    {
                        //L1
                        case (49):
                            L = L1;
                            break;
                        //L2
                        case (50):
                            L = L2;
                            break;
                        //L3
                        case (51):
                            L = L3;
                            break;
                        //L4
                        case (52):
                            L = L4;
                            break;
                    }
                    break;

                //RIGHT eye making problems!! fix tuesday morning!
                //fourth digit(R)
                case 3:
                    switch(num_s[i])
                    {
                        //R1
                        case (49):
                            R = L1;
                            break;
                        //R2
                        case (50):
                            R = L2;
                            break;
                        //R3
                        case (51):
                            R = L3;
                            break;
                        //R4
                        case (52):
                            R = L4;
                            break;
                    }
                    break;
                //fifth digit(X)
                case 4:
                    switch(num_s[i])
                    {
                        //X1
                        case (49):
                            XT = X1T; XB = X1B;
                            break;
                        //X2
                        case (50):
                            XT = X2T; XB = X2B;
                            break;
                        //X3
                        case (51):
                            XT = X3T; XB = X3B;
                            break;
                        //X4
                        case (52):
                            XT = X4T; XB = X4B;
                            break;
                    }
                    break;
                //sixth digit(Y)
                case 5:
                    switch(num_s[i])
                    {
                        //Y1
                        case (49):
                            YT = Y1T; YB = Y1B;
                            break;
                        //Y2
                        case (50):
                            YT = Y2T; YB = Y2B;
                            break;
                        //Y3
                        case (51):
                            YT = Y3T; YB = Y3B;
                            break;
                        //Y4
                        case (52):
                            YT = Y4T; YB = Y4B;
                            break;
                    }
                    break;
                //seventh digit(T)
                case 6:
                    switch(num_s[i])
                    {
                        //T1
                        case (49):
                            T = T1;
                            break;
                        //T2
                        case (50):
                            T = T2;
                            break;
                        //T3
                        case (51):
                            T = T3;
                            break;
                        //T4
                        case (52):
                            T = T4;
                            break;
                    }
                    break;
                //eighth digit(B)
                case 7:
                    switch(num_s[i])
                    {
                        //B1
                        case (49):
                            B = B1;
                            break;
                        //B2
                        case (50):
                            B = B2;
                            break;
                        //B3
                        case (51):
                            B = B3;
                            break;
                        //B4
                        case (52):
                            B = B4;
                            break;
                    }
                    break;
            }
        }

        //Now when we got from the input the "organ's", we need to assign them to our generic form of snowman.

        snowman = H + XT + "(" + L + N + R + ")" + YT + XB + T + YB + B;

        return snowman;

        
    }
}

// int main()
// {
//     return 0;
// }