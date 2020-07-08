    #include<iostream>
    using namespace std;

    class Dice
    {
        public:
        int state[7]={};//

        Dice(int label1, int label2, int label3, int label4, int label5, int label6)
        {
            state[1] = label1;
            state[2] = label2;
            state[3] = label3;
            state[4] = label4;
            state[5] = label5;
            state[6] = label6;
        }
        
        void move(char op)
        {
            int state_tmp[7] = {0, state[1],state[2],state[3],state[4],state[5],state[6]};
            if(op == 'S')
            {
                state[1] = state_tmp[5];
                state[2] = state_tmp[1];
                state[5] = state_tmp[6];
                state[6] = state_tmp[2];
            }
            else if(op == 'N')
            {
                state[1] = state_tmp[2];
                state[2] = state_tmp[6];
                state[5] = state_tmp[1];
                state[6] = state_tmp[5];
            }
            else if(op == 'W')
            {
                state[1] = state_tmp[3];
                state[4] = state_tmp[1];
                state[6] = state_tmp[4];
                state[3] = state_tmp[6];
            }
            else if(op == 'E')
            {
                state[1] = state_tmp[4];
                state[4] = state_tmp[6];
                state[6] = state_tmp[3];
                state[3] = state_tmp[1];
            }

        }

    };

    int main()
    {
        int label1, label2, label3, label4, label5, label6;

        cin >> label1 >> label2 >> label3 >> label4 >> label5 >> label6;
        Dice dice = Dice(label1, label2, label3, label4, label5, label6);

        char op[101]={};
        cin >> op;

        int i = 0;
        while(1)
        {
            if(op[i] == '\0') break;
            dice.move(op[i]);
            i++;
        }

        cout << dice.state[1] << endl;

        return 0;
    }

