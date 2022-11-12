vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                   
                                vector<long long>vt;
                                deque<long long>qt;
                                for(int i=0;i<N;i++){
                                    
                                    
                                    while(!qt.empty()&&qt.front()==i-K){
                                        qt.pop_front();
                                    }
                                    
                                    while(!qt.empty()&&A[qt.back()]>=A[i] && A[qt.back()]>=0  ){
                                        qt.pop_back();
                                    }
                                    
                                    qt.push_back(i);
                                    if(i>=K-1){
                                        if(A[qt.front()]>=0){
                                            vt.push_back(0);
                                        }else{
                                            vt.push_back(A[qt.front()]);
                                        }
                                    }
                                }return vt;
                                   
                           
            
 }
