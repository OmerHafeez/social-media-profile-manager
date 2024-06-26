# social-media-profile-manager

Class Definition
The Profile class has the following private member variables:

int user_ID: Stores the user's unique ID.
string user_name: Stores the user's username.
int number_of_posts: Stores the number of posts made by the user.
string email: Stores the user's email address.
int followers: Stores the number of followers the user has.
int likes: Stores the number of likes received by the user.
int comments: Stores the number of comments made by the user.
string password: Stores the user's password.
string Profile_pic: Stores the user's profile picture file path.
Public Member Functions
Profile(int id, string name, string password, string email, string pic): Constructor that initializes the profile with the given parameters.
void setter_numposts(int numpost): Sets the number of posts.
void setter_followers(int foll): Sets the number of followers.
void setter_like(int like): Sets the number of likes.
void setter_comments(int comm): Sets the number of comments.
void validateEmail() const: Validates the email format.
string getPasswordStrength() const: Returns the strength of the password.
void getProfileCompletionPercentage(string sten) const: Calculates and displays the profile completion percentage.
void getUserActivity() const: Displays the user's activity statistics.
int getLikes() const: Returns the total number of likes received.
int getNumOfPosts() const: Returns the total number of posts made.
void updateProfileInfo(string infoToUpdate): Allows users to update profile information.
