/*
CSCE 2110.001
Group H
	Jesse Boswell
	Luis Chaparro
	Craig Nafus
	Christian Betancourt
	Daniel Lee
	Taylor DeLaughter
	Satvir Singh
	Ameera Fatima
	Nancy Joy
*/

#pragma region Includes/Globals
#include "Dijkstra.h"
using namespace std;

vector<Node> Nodes;
vector<Edge> Edges;
#pragma endregion

int main()
{
#pragma region Variables
	string command;
	bool quit = false;
#pragma endregion

	CLEAR

		while (quit == false)
		{
			command = prompt();
			quit = runCommand(command);
		}

	CLEAR
		return 0;
}