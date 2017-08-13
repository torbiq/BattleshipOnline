#include "Ship.h"

int main() {
	bool booleans[]{ false, true, false };
	bool* _1 = &booleans[0];
	bool* _2 = &booleans[1];
	bool* _3 = &booleans[2];
	bool* bools[]{ _1, _2, _3 };
	Ship kek(3, bools);
	//kek.GetShipParts()[kek.GetLength() - 2] = false;
	cout << kek.GetShipPartsAt()[kek.GetLength() - 2];
	system("pause");
	return 0;
}