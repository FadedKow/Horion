#pragma once
#include "Module.h"
class EditionFaker : public IModule {
public:
	int osValue = 0;

	EditionFaker();
	~EditionFaker();

	int getFakedEditon();

	// Inherited via IModule
	virtual const char* getModuleName() override;
};
