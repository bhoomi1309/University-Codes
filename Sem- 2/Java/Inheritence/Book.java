class Book {
    private String authorname;
    
    static class book_publication{
        private String title;
        public void set_book_publication(String bookpublication){
            this.title=bookpublication;
        }
        public String get_book_publication(){
            return this.title;
        }
    }
    
    class paper_publication{
        private String title;
        public void set_paper_publication(String paperpublication){
            this.title=paperpublication;
        }
        public String get_paper_publication(){
            return this.title;
        }
    }
    
    public void set_authorname(String author){
        this.authorname=author;
    }
    public String get_authorname(){
        return this.authorname;
    }

}

