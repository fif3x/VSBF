#ifndef VSMIR_FIFEX_HPP
#define VSMIR_FIFEX_HPP // guards

#include <vector> // include the vector library
#include <string> // include the string library

namespace VSBF{ // namespace, VSBF stands for Vector Scanner By Fifex
    class vec_s_class_fif{ // start of the class
    public:
        enum type{ // enum for the type of scan
            sum,
            detail,
            err
        };

        template<typename T>
        static std::string scan(std::vector<T> vec, T target_elem, type _type){ // function to scan the vector
            if (_type == sum){
                std::string _fmsg = "Element found in vector"; // _fmsg = found message
                std::string _nfmsg = "Element not found in vector"; // _nfmsg = not found message
                for(auto& elem : vec){
                if(elem == target_elem){
                    return _fmsg;
                }
            }
            return _nfmsg;
            }else if(_type == detail){
                std::string _nfmsg = "Element not found in vector";
                for(int i = 0; i <= vec.size(); i++){
                    std::string _fmsg = "Element found at index #" + std::to_string(i);
                    if(vec.at(i) == target_elem){
                        return _fmsg;
                    }
                }
                return _nfmsg;
            }else{
                return "Error: Invalid type specified, select either 'sum' or 'detail'";
            }

        }
    };
}

#endif