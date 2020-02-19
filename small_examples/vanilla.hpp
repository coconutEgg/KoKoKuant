#ifndef __VANILLA_OPTION_H_
#define __VANILLA_OPTION_H_

class VanillaOption
{
private:

//helpers
void init();                                      


void copy(const VanillaOption& rhs);                //pass-by-reference-to-const

double K;

double r;

double T;

double S;

double sigma;


public:

VanillaOption();                                    //default constructor



VanillaOption(const double& _k, const double& _r,   //parameter constructor
                const double& _T, const double& _S,
                const double&   _sigma);

VanillaOption(const VanillaOption& rhs);            //copy constructor, pass by reference to const



VanillaOption& operator=(const VanillaOption& rhs); //Assignment, pass by reference to const



virtual ~VanillaOption();                           //virtual destructor for inheritance

};

#endif