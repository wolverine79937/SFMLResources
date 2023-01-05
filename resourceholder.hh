#include <map>
#include <string>
#include <memory>
#include <stdexcept>
#include <cassert>

template <typename Resource, typename Identifier>
class resourceholder
{
    public:
            void load(Identifier id, const std::string& filename);

    private:
        std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;
};