#ifndef _PROJECT_FILENAME_H__
#define _PROJECT_FILENAME_H__

#define _(CONTENT) L##CONTENT

namespace my_space
{
    const static double PI = 3.14159265358;

    template<typename T>
    class MyClass
    {
    public:
        using element_type = T;
    protected:
        T _child;
    private:
        T _element;
    public:
        constexpr MyClass(T value) : _child(value), element(_value) {}
        const T& get_element() { return _element; }
        void set_element(const T &value) { _element = value; };
        ~MyClass() {}
    };

    template<typename T>
    void quick_sort(std::vector<T> &v)
    {
        _quick_sort(v, 0, v.size());
    }

    template<typename T>
    void _quick_sort(std::vector<T> &v, size_t start, size_t end)
    {
        if (start >= end)
            return;

        size_t left = start, right = end - 1;
        T mid = v[(right - left) / 2];

        while (left < right)
        {
            while (v[left] <= mid && left < right) left++;
            while (v[right] >= mid && left < right) right--;

            std::swap(v[left], v[right]);
        }

        v[left] = mid;
        _quick_sort(v, start, left - 1);
        _quick_sort(v, left + 1, start);
    }

} // namespace my_space

#endif //_PROJECT_FILENAME_H__
