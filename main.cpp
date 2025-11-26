#include <iostream>
#include "Library.h"


using namespace std;

int main() {
    Library lib;
    Author a{"Ivan Vazov", 1950};
    Book b1{"Pod igoto", a, 1894, 25.50, "ISBN-001"};
    Book b2{"Nema zemya", a, 1900, 18.90, "ISBN-002"};

    lib.addBook(b1);
    lib.addBook(b2);
    lib.addReader(Reader{"Petar Petrov", "M001", 2023});

    cout << lib.to_string() << "\n";

    lib.loanBook("ISBN-001", "M001", "2025-11-03", "2025-11-17");

    lib.isBookAvailable("ISBN-001");

    lib.returnBook("ISBN-001", "M001");
    lib.isBookAvailable("ISBN-001");

    for (const auto& bk : lib.findBooksByAuthor("Vazov")) {
        cout << bk.to_string() << "\n";
    }
}