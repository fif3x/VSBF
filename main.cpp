#include <iostream>
#include <vector>
#include <string>

#include "VSBF.hpp" // include the header file for the VSBF library

int main(){

    std::vector<std::string> carBrands = {"Toyota", "Honda", "Ford", "Chevrolet", "Nissan"}; // example of a vector

    VSBF::vec_s_class_fif vsf; // use this, or use `VSBF::vec_s_class_fif::scan` directly, recommended is `VSBF::vec_s_class_fif vsf;`

    std::string result = vsf.scan<std::string>(carBrands, "Ford", vsf.type::detail); // detailed
    std::cout << result << std::endl;

    result = vsf.scan<std::string>(carBrands, "Ford", vsf.type::sum); // sum-ed up
    std::cout << result << std::endl;

    result = vsf.scan<std::string>(carBrands, "BMW", vsf.type::detail); // detailed
    std::cout << result << std::endl;

    result = vsf.scan<std::string>(carBrands, "BMW", vsf.type::sum); // sum-ed up
    std::cout << result << std::endl;



    return 0;
}