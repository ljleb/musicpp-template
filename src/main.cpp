#include <musicpp.hpp>

int main(int const argc, char** const argv)
{
    mpp::Config const& config { argc, argv };

    auto&& input
    {
        mpp::Mix
        {
            
        }
    };

    return mpp::main(input, config);
}
