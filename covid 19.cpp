  #include<iostream>

            using namespace std;

            int main()
            {
                int t,size,i,num,prev,dis,flag;
                cin >> t;
                while(t--)
                {
                    prev=-1;
                    flag=0;
                    cin >> size;
                    for(i=0;i<size;i++)
                        {
                            cin >> num;
                            if(num==1 && prev==-1)
                            {
                                prev=i;
                            }
                            else if(num==1 && prev!=-1)
                            {
                                dis=i-prev;
                                if(dis<6)
                                    {
                                        flag=1;

                                    }
                                prev=i;
                            
                            }

                        }
                        if(flag==1)
                            cout << "NO" << endl;
                        else
                        {
                            cout << "YES" << endl;
                        }
                        
                }

              return 0;

            }
