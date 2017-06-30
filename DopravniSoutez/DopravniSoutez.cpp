#include "stdafx.h"
#include "database.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	Database *db;
	db = new Database("drcomp");
	//db->query("CREATE TABLE a (a INTEGER, b INTEGER);");
	//db->query("INSERT INTO a VALUES(1, 2);");
	//db->query("INSERT INTO a VALUES(5, 4);");

	vector<vector<string> > result = db->query("SELECT a, b FROM a;");

	for (vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
	{
		vector<string> row = *it;
		cout << row.at(0) << row.at(1) << row.at(2) << row.at(3) << row.at(4) << row.at(5) << row.at(6) << row.at(7) << row.at(8) << row.at(9) << endl;
	}
	cin.get();

	db->close();
}

