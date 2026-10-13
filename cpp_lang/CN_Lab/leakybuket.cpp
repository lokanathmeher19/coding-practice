//(Function to simulate data leakage leaving the bucket)
void leakData(){
    if(!bucket.empty()){
        int data_leaked=std::min(rate current_data);
        current_data-=data_leaked;
        bucket.pop();
        std::cout<<" Leaked data:"<<data_leaked<<"uniit .buket size:"<<current_data<<std::endl;}
        else{
            std::cout<<"Bucket is empty. No data to leak."<<std::endl;
        }
    }
    //function to simutalte time step  
    void simulate Timestep(){
        leakData();//leak data at each time step
    }
};

int main(){
    int bucket_capacity,leak_rate,incoming_data;
}

//Initialize the Leaky Bucket parameters
std::cout<<"enter the capacity of the bucket:";
    