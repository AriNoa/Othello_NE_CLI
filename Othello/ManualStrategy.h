#pragma once
#include <random>
#include "IAgentStrategy.h"



class ManualStrategy : public IAgentStrategy {
public:
	virtual std::string getName() const { return "Manual"; }
	virtual Point answer(const Othello& othello) override;
};