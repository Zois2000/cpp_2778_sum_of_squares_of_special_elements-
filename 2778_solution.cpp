class Solution {
public:
    int sumOfSquares(const std::vector<int>& nums) {
        auto nums_size = nums.size();
        int sum{};

        for (size_t index{1}; index * index <= nums_size; index++) {
            if (nums_size % index == 0) {
                sum = sum + nums[index - 1] * nums[index - 1];

                int partner_pos = nums_size / index;
                int partner_index = partner_pos - 1;

                if (partner_pos != index) {
                    sum = sum + nums[partner_index] * nums[partner_index];
                }
            }
        }
        return sum;
    }
};
