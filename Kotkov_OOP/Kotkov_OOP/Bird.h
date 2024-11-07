#pragma once
#include "Utilities_kotkov.h"
#include "Animal_kotkov.h"
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/export.hpp>

class Bird: public Animal_kotkov{
public:
	void input_animal() override;
	void print(std::ostream& stream, bool pretty) override;

	Bird() {  }
protected:
	bool _can_fly = 0;
private:
	friend class boost::serialization::access;
	template <typename Archive>
	void serialize(Archive& ar, const unsigned int version)
	{
		ar& boost::serialization::base_object<Animal_kotkov>(*this);
		ar& _can_fly;
	}
};

