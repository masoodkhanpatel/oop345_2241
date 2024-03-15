// Smart Pointer
// SmartPtr.h

template <typename T>
class SmartPtr
{
    T* p { nullptr }; // point to nothing

public:
    explicit SmartPtr(T* ptr) : p(ptr) { } ; // p = ptr // connecting to resource
    // Person* p1 = new Person(....)
    // SmartPtr<Person> abc = new SmartPtr(p1);
    // p = p1;

    SmartPtr(const SmartPtr&) = delete;
    SmartPtr& operator=(const SmartPtr&) = delete;

    SmartPtr(SmartPtr&& s) noexcept
    {
        p = s.p;
        s.p = nullptr;
    }
    SmartPtr& operator=(SmartPtr&& s) noexcept
    {
        if (this != &s)
        {
            delete p;
            p = s.p;
            s.p = nullptr;
        }
        return *this;
    }

    ~SmartPtr() // deleting the resource
    {
        delete p;
    }

    T& operator*()
    {
        return *p;
    }

    T* operator->()
    {
        return p;
    }
};