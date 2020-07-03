#include "caculate.h"

caculate::caculate()
{

}


double caculate::Ans()
{
    if(this->type == "+")return num1+num2;
    if(this->type == "-")return num1-num2;
    if(this->type == "*")return num1*num2;
    if(this->type == "/")return num1/num2;
}
