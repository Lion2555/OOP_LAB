#include <iostream>
#include <string>
using namespace std;

class LineSegment
{
private:
    double start_x;
    double start_y;
    double end_x;
    double end_y;

public:
    LineSegment()
    {
        start_x = 10.0;
        start_y = 11.0;
        end_x = 12.0;
        end_y = 13.0;
    }

    LineSegment(double st_x, double st_y, double en_x, double en_y)
    {
        start_x = st_x;
        start_y = st_y;
        end_x = en_x;
        end_y = en_y;
    }

    LineSegment operator+(const LineSegment& other) const
        // Combine line segments by keeping the original start and setting the end to the other end
    {

        LineSegment result(start_x, start_y, other.end_x, other.end_y);
        return result;
    }

    LineSegment& operator+=(int number)
    {
        end_x += number;
        end_y += number;
        return *this;
    }

    LineSegment& operator=(const LineSegment& other)
    {
        start_x = other.start_x;
        start_y = other.start_y;
        end_x = other.end_x;
        end_y = other.end_y;
        return *this;
    }

    LineSegment operator++()
        // Increment the end point of the line segment
    {
        ++end_x;
        ++end_y;
        return *this;
    }

    friend ostream& operator<<(ostream& out, const LineSegment& line)
        //When a function or class is declared a friend of another class, it means that the function or class has special access to private and protected members of that class
    {
        cout << "Start: (" << line.start_x << ", " << line.start_y << "), " << "End: (" << line.end_x << ", " << line.end_y << ")";
        return out;
    }
};

int main()
{
    LineSegment segment1;
    LineSegment segment2(1.0, 2.0, 3.0, 4.0);

    cout << "Combining segments: " << (segment1 + segment2) << endl;

    int number;
    cout << "Enter the number to extend the segment: ";
    cin >> number;
    segment1 += number;
    segment2 += number;
    cout << "Extended segments: Segment1 = " << segment1 << ", Segment2 = " << segment2 << endl;

    segment1 = segment2;
    cout << "Assigned segment: Segment1 = " << segment1 << endl;

    LineSegment segment3 = ++segment1;
    cout << "Incremented segment: Segment3 = " << segment3 << endl;

    return 0;
}
