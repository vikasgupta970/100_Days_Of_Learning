  int t,size;
    unordered_set<int> arr,d;
    cout<<"Enter t";
    cin>>t;
        for(int i=0;i<t;i++){
            cout<<"Enter size";
            cin>>size;
            for(int j=0;j<size;j++){
                int m;
                cin>>m;
                if(arr.find(m)!=arr.end()){
                    d.insert(m);
                }
                else{
                    arr.insert(m);
                }
        }
    }
    for(auto i=d.begin();i!=d.end();i++){
        cout<<*i;
    }