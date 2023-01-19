#include <map>
#include <string>
#include <memory>
#include <stdexcept>
#include <cassert>

template <typename Resource, typename Identifier>
class ResourceHolder
{
    public:
            bool loadFromFile(Identifier id, const std::string& filename);

    private:
        std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;
};