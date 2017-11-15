/*
By: Mark Ruiz | Last modified: 11/15 @6:21pm
Big Programming Assingment
Professor Stevenson
Algorithms
*/
#pragma once
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>	
#include <list>
#include <limits>
#include <set>
#include <iterator>

using namespace std;

class Dijkstra
{
	//define place and miles 
	typedef int place;
	typedef double miles;
	//have constant for miles -> totalMiles
	const miles totalMiles = numeric_limits<double>::infinity();
	//data struct neighbors
	struct neighborCities
	{
		place target; //McKinney, Texas
		miles weight; //Miles
		neighborCities(place arg_target, miles arg_weight)
			: target(arg_target), weight(arg_weight) {}
	};
	
	typedef vector<vector<neighborCities> > adjacentCityList;

	void dijkstraAlg(place source, const adjacentCityList &adjacentCityList,
					vector<place> &minDistance, vector<miles> &lastPlace)//continue
	{

	}














public:


	Dijkstra();
	~Dijkstra();
};

