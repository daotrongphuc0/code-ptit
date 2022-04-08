package Book;

public class Author {
    private String name;

    public Author(String name) {
        name = name.trim();

        this.name = name;
    }

    @Override
    public String toString() {
        return "author{name=" + name + '}';
    }
}
