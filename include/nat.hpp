//
// Created by Nicholas Burrell on 10/26/2021.
//

#ifndef THALLIUM_NAT_HPP
#define THALLIUM_NAT_HPP

namespace thallium {
    struct Nat { };

    struct Z : Nat { };

    template<typename T, typename = std::enable_if_t <std::is_base_of<Nat, T>::value>>
    struct Succ : Nat { };

    template<typename T>
    struct Even { };

    template<>
    struct Even<Z> {
        using result_type = std::true_type;
    };

}

#endif //THALLIUM_NAT_HPP
