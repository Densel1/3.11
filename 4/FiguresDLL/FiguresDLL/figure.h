

#ifdef TRIANGLE_EXPORTS
#define TRIANGLE_API __declspec(dllexport)
#else
#define TRIANGLE_API __declspec(dllimport)
#endif // TRIANGLE_EXPORTS



#ifndef _FIGURE_
#define _FIGURE_

#include <iostream>


class TRIANGLE_API figure{

 protected:
		 bool f = false;
		 bool t = true;
		 int sidesCount;
		 std::string figureName;
		 void SetSideCount(int sideCount);
 public:

	 figure():figure("Фигура", 0) {}
		 figure(std::string name, int sidesCount)
		 {
				 this->figureName = name;
				 SetSideCount(sidesCount);
		 }

		 int getSidesCount()
		 {
				 return sidesCount;
		 }

		 virtual void print_info();

		 virtual bool check();
};

#endif