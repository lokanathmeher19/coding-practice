#include <algorithm>
#include <cstddef>
#include <iostream>
#include <queue>

class LeakyBucket {
public:
    LeakyBucket(int capacity, int leakRate)
        : capacity_(capacity), leakRate_(leakRate) {}

    void addPacket(int packetSize) {
        if (packetSize <= 0) {
            std::cout << "Packet size must be positive.\n";
            return;
        }

        ++totalPackets_;
        if (packetSize > capacity_ - currentData_) {
            ++droppedPackets_;
            droppedData_ += packetSize;
            std::cout << "Packet dropped: not enough space in the bucket.\n";
            return;
        }

        bucket_.push(packetSize);
        currentData_ += packetSize;
        std::cout << "Packet accepted. Bucket usage: " << currentData_ << '/'
                  << capacity_ << '\n';
    }

    void simulateTimeStep() {
        int remaining = leakRate_;

        while (remaining > 0 && !bucket_.empty()) {
            int& packet = bucket_.front();
            const int leaked = std::min(remaining, packet);
            packet -= leaked;
            remaining -= leaked;
            currentData_ -= leaked;
            transmittedData_ += leaked;

            if (packet == 0) {
                bucket_.pop();
            }
        }

        std::cout << "Leaked data: " << leakRate_ - remaining
                  << " unit(s). Bucket usage: " << currentData_ << '/'
                  << capacity_ << '\n';
    }

    void printStatistics() const {
        std::cout << "\n--- Statistics ---\n"
                  << "Packets received: " << totalPackets_ << '\n'
                  << "Packets dropped: " << droppedPackets_ << '\n'
                  << "Data dropped: " << droppedData_ << " unit(s)\n"
                  << "Data transmitted: " << transmittedData_ << " unit(s)\n"
                  << "Data remaining: " << currentData_ << " unit(s)\n";
    }

private:
    int capacity_;
    int leakRate_;
    int currentData_ = 0;
    int totalPackets_ = 0;
    int droppedPackets_ = 0;
    int droppedData_ = 0;
    int transmittedData_ = 0;
    std::queue<int> bucket_;
};

int main() {
    int bucketCapacity;
    int leakRate;
    int timeSteps;

    std::cout << "Enter the capacity of the bucket: ";
    if (!(std::cin >> bucketCapacity) || bucketCapacity <= 0) {
        std::cerr << "Capacity must be a positive integer.\n";
        return 1;
    }

    std::cout << "Enter the leak rate: ";
    if (!(std::cin >> leakRate) || leakRate <= 0) {
        std::cerr << "Leak rate must be a positive integer.\n";
        return 1;
    }

    std::cout << "Enter the number of time steps: ";
    if (!(std::cin >> timeSteps) || timeSteps <= 0) {
        std::cerr << "Time steps must be a positive integer.\n";
        return 1;
    }

    LeakyBucket bucket(bucketCapacity, leakRate);

    for (int step = 1; step <= timeSteps; ++step) {
        int incomingData;
        std::cout << "\nTime step " << step
                  << " - enter incoming packet size (0 for no packet): ";
        if (!(std::cin >> incomingData) || incomingData < 0) {
            std::cerr << "Packet size must be a non-negative integer.\n";
            return 1;
        }

        if (incomingData > 0) {
            bucket.addPacket(incomingData);
        }
        bucket.simulateTimeStep();
    }

    bucket.printStatistics();
    return 0;
}
