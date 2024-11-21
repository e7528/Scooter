string pickScooter(int choice) {

	string scooter1 = "Kiddie Scooter";
	string scooter2 = "3 Wheel Scooter";
	string scooter3 = "2 Wheel Scooter";


	switch (choice) {
	    case 1:
		    cout << "You chose the Kiddie Scooter!\n";
			return scooter1;
		    break;
		case 2:
			cout << "You chose the 3 Wheel Scooter!\n";
			return scooter2;
			break;
		case 3:
			cout << "You chose the 2 Wheel Scooter!\m";
			return scooter3;
			break;
	}

}
