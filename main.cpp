#include "item.hpp" // Include the header file
#include <SFML/Graphics.hpp>

void gui();
int main() {
  Item item1("Apple", 0.99, "A red apple");
  Item item2("Banana", 0.59, "A yellow banana");

  item1.printItem();
  item2.printItem();

    gui();

  return 0;
}


void gui(){
    // Create a window with the title "Hello, SFML"
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hello, SFML");
    
    // Create a text object
    sf::Text text;
    text.setString("Hello, SFML");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    
    // Load a font
    sf::Font font;
    font.loadFromFile("arial.ttf");
    text.setFont(font);
    
    // Main loop that continues until we call window.close()
    while (window.isOpen()) {
        // Check for all the events that occurred since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event)) {
        // If the event is the user closing the window, then close the window
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        }
    
        // Clear the window
        window.clear();
    
        // Draw the text
        window.draw(text);
    
        // Display the window contents
        window.display();
    }
}