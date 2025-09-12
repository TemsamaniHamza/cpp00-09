#ifndef Brain_hpp
#define Brain_hpp

#include "Animal.hpp"

class Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(std::string type);
        ~Brain();
        const std::string getBrain (int i) const;
        void setBrain(int i, const std::string& idea);
        Brain& operator=(const Brain& obj);
        Brain(const Brain&cpy);
};

#endif
