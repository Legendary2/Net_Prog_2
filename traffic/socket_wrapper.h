#pragma once

#include <memory>
#include <string>


namespace socket_wrapper
{

    class SocketWrapperImple;

    class SocketWrapper
    {
    public:
        SocketWrapper();
        ~SocketWrapper();

    public:
        bool initialized() const;
        int get_last_error_code() const;
        std::string get_last_error_string() const;

    private:
        std::unique_ptr<SocketWrapperImple> impl_;
    };

}