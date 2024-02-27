public class BookDemo{
    public static void main(String[] args) {
        Book b=new Book();
        Book.book_publication book=new Book.book_publication();
        Book.paper_publication paper=b.new paper_publication();
        b.set_authorname(args[0]);
        System.out.println("Author name: "+b.get_authorname());
        book.set_book_publication(args[1]);
        System.out.println("Book publication title: "+book.get_book_publication());
        paper.set_paper_publication(args[2]);
        System.out.println("Paper publication title: "+paper.get_paper_publication());
    }
}
