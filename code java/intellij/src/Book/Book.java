package Book;

public class Book {
    private Author author;
    private String title;
    private int noOfPages;
    private boolean fiction;

    public Book(Author author, String title, int noOfPages, boolean fiction) {
        this.author = author;
        this.title = title;
        this.noOfPages = noOfPages;
        this.fiction = fiction;
    }

    public void setAuthor(Author author) {
        this.author = author;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    @Override
    public String toString() {
        return "Book{" +
                "author=" + author +
                ", title=" + title  +
                ", noOfPages=" + noOfPages +
                ", fiction=" + fiction +
                '}';
    }
}
