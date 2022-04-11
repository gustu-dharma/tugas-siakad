#ifndef __DOSEN_HPP__
#define __DOSEN_HPP__

#include <iostream>
#include "include/person.hpp"

class dosen : public person {
private:
	std::string npp;
	std::string departemen;
	std::string pendidikan;
	std::string fakultas;

public:
	dosen(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string departemen, std::string pendidikan, std::string fakultas);

	void setPendidikan(std::string pendidikan);
	std::string getPendidikan();

	void setNPP(std::string npp);
	std::string getNPP();

	void setDepartemen(std::string departemen);
	std::string getDepartemen();

	void setFakultas(std::string departemen);
	std::string getFakultas();};

#endif 
