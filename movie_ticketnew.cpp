#include <iostream>
#include <map>

using namespace std;

// Movie database
map<int, pair<string, double>> movies = {
    {1, {"Movie 1", 10.0}},
    {2, {"Movie 2", 12.0}},
    {3, {"Movie 3", 8.0}},
};

int main() {
    int selectedMovie = 0;
    int numTickets = 0;

    // Display movie list
    cout << "Welcome to the Movie Ticket Reservation System" << endl;
    cout << "Available Movies:" << endl;
    for (const auto& entry : movies) {
        cout << entry.first << ". " << entry.second.first << " - $" << entry.second.second << endl;
    }

    // Select a movie
    while (movies.find(selectedMovie) == movies.end()) {
        cout << "Enter the movie number you want to watch: ";
        cin >> selectedMovie;
        if (movies.find(selectedMovie) == movies.end()) {
            cout << "Invalid input. Please enter a valid movie number." << endl;
        }
    }

    // Enter the number of tickets
    while (numTickets <= 0) {
        cout << "Enter the number of tickets you want to purchase: ";
        cin >> numTickets;
        if (numTickets <= 0) {
            cout << "Invalid input. Please enter a positive number of tickets." << endl;
        }
    }

    // Calculate the total cost
    double ticketPrice = movies[selectedMovie].second;
    double totalCost = ticketPrice * numTickets;

    // Display reservation details
    cout << "\nReservation Details:" << endl;
    cout << "Movie: " << movies[selectedMovie].first << endl;
    cout << "Number of Tickets: " << numTickets << endl;
    cout << "Total Cost: $" << totalCost << endl;

    // Ask for confirmation
    string confirmation;
    cout << "\nConfirm your reservation (yes/no): ";
    cin >> confirmation;

    if (confirmation == "yes") {
        // Implement payment processing here (not included in this simplified example)
        cout << "Payment successful. Enjoy the movie!" << endl;
    } else {
        cout << "Reservation canceled. Have a great day!" << endl;
    }

    return 0;
}