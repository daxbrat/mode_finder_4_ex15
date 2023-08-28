#include "std_lib_facilities.h"

int main()
{
	int num{};
	vector <int> nums{};
	cout << "Enter a number: \n";
	while (cin >> num) {
		nums.push_back(num);
		sort(nums);
		cout << "Vector so far: ";
		for (int i : nums) {
			cout << i << " ";
		}
		cout << '\n';
	}

	//--------------------- Find Mode

    int maxCount = 0, mode = 0;

    for (int i = 0; i < nums.size(); ++i) {
        int count = 0;

        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mode = nums[i];
        }
    }

    if (maxCount > 1) {
        cout << "Mode: " << mode << endl;
    }
    else {
        cout << "No mode found." << endl;
    }

	return 0;
}
