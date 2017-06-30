#include "stdafx.h"
#include "database.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	Database *db;
	db = new Database("Database.sqlite");
	db->query("CREATE TABLE a (a INTEGER, b INTEGER);");
	db->query("INSERT INTO a VALUES(1, 2);");
	db->query("INSERT INTO a VALUES(5, 4);");

	vector<vector<string> > result = db->query("SELECT a, b FROM a;");

	for (vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
	{
		vector<string> row = *it;
		cout << "Values: (A=" << row.at(0) << ", B=" << row.at(1) << ")" << endl;
	}
	cin.get();

	db->close();
}

