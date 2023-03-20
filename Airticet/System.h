#pragma once

#include <set>
#include <vector>
#include <algorithm>

#include "Ticet.h"

namespace Airline {

	using std::set;
	using std::find;
	using std::vector;

	typedef vector<Ticet> vTicet;
	typedef set<Ticet>::iterator set_it;

	class System {
		set<Ticet> ticet;

	public:
		System();

		void pushTicet(Ticet ticet);
		
		void eraseTicet(Ticet ticet);
		
		vTicet getTicetsByPlace(string place) const;
		vTicet getAllTicet() const;
	};

}