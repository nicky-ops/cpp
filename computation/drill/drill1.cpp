#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    double x = 0;
    char unit;
    int values_count = 0;
    double smallest = 0;
    double largest = 0;
    double in_cm = 0;
    double m_cm = 0;
    double ft_cm = 0;
    double cm = 0;
    double overall_sum = 0;
    double m_to_cm_multiplier = 100;
    double in_to_cm_multiplier = 2.54;
    double ft_to_in_multiplier = 12;
    std::vector<double> measurements;
    
    std::cout<<"Enter a number followed by its unit (supported units: i, c, f, m): "<<'\n';
    while(std::cin >>x>>unit)
    {
        switch (unit)
        {
        case 'i':
            in_cm = x * 2.54;
            overall_sum += in_cm;
            if (in_cm > largest){
                largest = in_cm;
            } else if (in_cm < smallest){
                smallest = in_cm;
            }
            measurements.push_back(in_cm / 100);
            break;
        case 'm':
            m_cm = x * 100;
            overall_sum += m_cm;
            if (m_cm > largest){
                largest = m_cm;
            } else if (m_cm < smallest){
                smallest = m_cm;
            }
            measurements.push_back(x);
            break;
        case 'f':
            ft_cm = (x * ft_to_in_multiplier) * 2.54;
            overall_sum += ft_cm;
            if (ft_cm > largest){
                largest = ft_cm;
            } else if (ft_cm < smallest){
                smallest = ft_cm;
            }
            measurements.push_back(ft_cm / 100);
            break;
        case 'c':
            cm = x;
            overall_sum += cm;
            if (cm > largest){
                largest = cm;
            } else if (cm < smallest){
                smallest = cm;
            }
            measurements.push_back(cm / 100);
            break;
        default:
            std::cout<<"Invalid unit\n";
            break;
        }
        ++values_count;
    }
    std::ranges::sort(measurements);
    for (double x: measurements){
        std::cout<<x<<'\n';
    }
    std::cout<<"The total sum of measurements is: "<<overall_sum / 100<<" , the total value count is: "<<values_count<<", The largest value entered is: "<<largest<<" and the smallest value entered is: "<<smallest<<'\n';
}
