const char *prime(int number)
	{
    int i, flag = 0;

    for (i = 2; i <= number / 2; ++i) {

        // condition for non-prime
        if (number % i == 0) {
            flag = 1;
            break;
        }
    }

    if (number == 1) {
        return "Neither Prime Nor Composite";
    }
    else {
        if (flag == 0)
            return "True";
        else
            return "False";
    }
	}
