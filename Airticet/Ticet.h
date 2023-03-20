#pragma once
#include <string>

#define nodata "unknown"

namespace Airline {

	using std::string;

	class Ticet {
	private:
		static int static_id;

	protected:

		int id;
		string place;
		string fullname;
		string date;

	public:
		Ticet(string place, string fullane, string date);
		Ticet();

		void setPlace(string place);
		void setFullname(string fullname);
		void setDate(string date);

		string getPlace() const;
		string getFullname() const;
		string getDate() const;

		int getId() const;

		bool operator>(const Ticet& right) const;
		bool operator<(const Ticet& right) const;
	};

}