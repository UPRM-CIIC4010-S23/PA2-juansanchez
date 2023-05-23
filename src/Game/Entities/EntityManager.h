#pragma once

#include "Entity.h"
#include "Inspector.h"
#include "Client.h"

class EntityManager {

public:
	Client* firstClient;
	void tick();
	void render();
	void addEntity(Entity *e);
	void addClient(Client *c);
	void removeLeavingClients();
	std::vector<Entity*> entities;
	void setCount(){this->count = 0;}
	int count = 0;
	bool inspector = false;
	bool angry = false;

};