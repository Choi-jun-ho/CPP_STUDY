#include <iostream>

using namespace std;

class perceptron
{
private:
    double x;
    double y;
    double w;
    double c; // 손실
    int isincrease;
public:
    perceptron(double x, double y, double w)
    :x(x), y(y), w(w)
    {
        
    }

    double prediction(double w)
    {
        return this->x * w;
    }

    double loss(double w) 
    {   
        // 손실함수
        // x가 여러개 일 때 리스트로 불러와 리스트의 갯수 만큼 반복
        c = y - prediction(w);
        return c*c;
    }

    void run(int num, double increase)
    {
        
        double inclination = loss(w + 1) - loss(w);

        w += 1;
        int i = 0;
        if(inclination < 0)
        {
            isincrease = -1;
        }
        else if(inclination > 0)
        {
            isincrease = 1;
        }
        else 
        {
            isincrease = 0;
        }
        
        for (int a = 1; a < num+1; a++)
        {            
            cout << a << "번째 : ";

            if(inclination < 0)
            {
                isincrease = -1;
            }
            else if(inclination > 0)
            {
                isincrease = 1;
            }
            else 
            {
                isincrease = 0;
            }

            if (c*c < 25)
            {
                isincrease = 0;
            }
        
            if (inclination < 0)
            {
                inclination = (loss(w+increase) - loss(w))/increase;

                if(isincrease < 0)
                {
                    i++;
                    w += increase * i;
                }
                else
                {
                    i=0;
                    w += increase;
                }
                
                isincrease = -1;
            }
            else if (inclination > 0)
            {                
                inclination = (loss(w) - loss(w-increase))/increase;

                if(isincrease > 0)
                {
                    i++;
                    w -= increase * i;
                }
                else
                {
                    i=0;
                    w -= increase;
                }
                
                isincrease = 1;

            }
            else
            {
                isincrease = 0;
                break;
            }

            cout << "가중치 : " <<  w << ", 예측 값 : " << prediction(w) << "," << prediction(w)+c << ", loss : " << c  << "r" << y << endl;

            if(prediction(w) == y)
            {
                break;
            }
        }
        

    }
};

int main(void)
{
    double x = 100;
    double y = 1000;
    // y = x * a;

    double w = 0.1;

    perceptron pc(x, y, w);

    pc.run(1000, 0.00005);



    return 0;
}



