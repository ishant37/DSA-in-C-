// #include <iostream>
// #include <algorithm> // Required for next_permutation
// #include <vector>

// int main() {
//     std::vector<int> nums = {1, 2, 3};
    
//     // Sort first to ensure we start from the smallest permutation
//     std::sort(nums.begin(), nums.end());

//     do {
//         for (int n : nums) std::cout << n << " ";
//         std::cout << "\n";
//     } while (std::next_permutation(nums.begin(), nums.end()));
    
//     return 0;
// }


#include<iostream> 
using namespace std;
class BixDerived : public BixBase
{
    private:
        BixBase objBase; 
    public:
    BixDerived(int xx, int yy) : BixBase(xx, yy)
    {
        objBase.Show();
    }
};
int main()
{
    BixDerived objDev(10, 20);
    return 0; 
}
{
    Bix *p = new Bix();

    (*p).x = 10;
    cout<< (*p).x << " " << p->x << " " ;

    p->x = 20;
    cout<< (*p).x << " " << p->x ;

    return 0;
}