#include<LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
#include <trygonometria.h>
#else
#include <cmath>
#endif

int main()
{
	double result=0;
	double result1=0.0;
	double result2=0.0;
	double result3=0.0;
	double result4=0.0;

	result1=degremath::sin(45.0);
	std::cout<<"Sin" <<std::endl;
	std::cout<<result1<<std::endl;

	result1=degremath::sin(45.0);
	std::cout<<"Cos" <<std::endl;
	std::cout<<result2<<std::endl;

	result1=degremath::sin(45.0);
	std::cout<<"Tg" <<std::endl;
	std::cout<<result3<<std::endl;

	result1=degremath::sin(45.0);
	std::cout<<"Ctg" <<std::endl;
	std::cout<<result4<<std::endl;

	double result=0.0;

	#ifdef USE_TRIGONOMETRY_DEGREE
	result=degreemath::cos(45.0);
	std::cout<<result<<result<<std::endl;
#else
	result=std::cos(45.0);
	std::cout<<result<<std::endl;
#endif

}