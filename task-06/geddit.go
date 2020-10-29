//@kingjuno
package main
import (
	"context"
	"log"
	"fmt"
	"github.com/vartanbeno/go-reddit/reddit"
	"github.com/jzelinskie/geddit"
)
var ctx = context.Background()
func main() {
	if err := run(); err != nil {
		log.Fatal(err)
	}
}
func run() (err error) {

	withCredentials := reddit.WithCredentials("id", "secret", "user_name", "pass")
    	client, _ := reddit.NewClient(withCredentials)
	session, _ := geddit.NewLoginSession(
		"user_name",
		"pass",
		"gedditAgent v1",
	)
	subOpts := geddit.ListingOptions{
		Limit: 10,
		Time:"LastMonth",
	}
	posts, _ := session.DefaultFrontpage(geddit.DefaultPopularity, subOpts)
	posts, _ = session.Frontpage(geddit.DefaultPopularity, subOpts)
	posts, _ = session.SubredditSubmissions("memes", geddit.DefaultPopularity, subOpts)
	for _,post:=range posts{
		_, err := client.Post.Upvote(ctx,"t3_"+post.ID)
		if err != nil {
			fmt.Println(err);
		}
	}
	return
}
