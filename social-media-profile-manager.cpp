#include<iostream>
using namespace std;

class Profile
{
    int user_ID;
    string user_name;
    int number_of_posts;
    string email;
    int followers;
    int likes;
    int comments;
    string password;
    string Profile_pic;

public:
    Profile(int id, string name, string password, string email, string pic)
    {
        user_ID = id;
        user_name = name;
        this->password = password;
        this->email = email;
        Profile_pic = pic;
    }

    void setter_numposts(int numpost)
    {
        number_of_posts = numpost;
    }

    void setter_followers(int foll)
    {
        followers = foll;
    }

    void setter_like(int like)
    {
        likes = like;
    }

    void setter_comments(int comm)
    {
        comments = comm;
    }

    void validateEmail() const
    {
        int i = 0;
        while (email[i] != '\0') {
            ++i;
        }
        bool check1 = false;
        bool check2 = false;
        for (int j = 0; j < i; j++)
        {
            if (email[j] == '@')
                check1 = true;
        }
       
        if (email[i - 3] == 'c' && email[i - 2] == 'o' && email[i - 1] == 'm')
            check2 = true;
        if (check1 == false || check2 == false)
            cout << "You have not valid email" << endl;
    }

    string getPasswordStrength() const
    {
        int strength = 0;
        int lower = 0;
        int upper = 0;
        int special = 0;
        int num = 0;
        int length = 0;
        while (password[length] != '\0') {
            ++length;
        }
        if (length >= 12)
            strength += 20;
        else if (length >= 8)
            strength += 10;
        else
            strength += 5;
        for (int i = 0; i < length; i++)
        {
            if (password[i] >= 'a' && password[i] <= 'z')
                lower++;
            else if (password[i] >= 'A' && password[i] <= 'Z')
                upper++;
            else if (password[i] >= '0' && password[i] <= '9')
                num++;
            else
                special++;
        }
        if (lower >= 3)
            strength += 20;
        else if (lower >= 1)
            strength += 10;
        else
            strength += 0;
        if (upper >= 3)
            strength += 20;
        else if (upper >= 1)
            strength += 10;
        else
            strength += 0;
        if (num >= 3)
            strength += 20;
        else if (num >= 1)
            strength += 10;
        else
            strength += 0;
        if (special >= 3)
            strength += 20;
        else if (special >= 1)
            strength += 10;
        else
            strength += 0;
        if (strength >= 80)
            return "strong";
        else if (strength >= 50)
            return "medium";
        else
            return "weak";
    }

 void getProfileCompletionPercentage(string sten) const {
        int percentage = 0;
        if(sten=="strong")
            percentage+=30;
        else if(sten=="medium")
            percentage+=15;
        else
            percentage+=5;
        if(Profile_pic!="default")
            percentage+=20;
        if(likes>=100)
            percentage+=15;
        else if(likes>=50)
            percentage+=10;
        else
            percentage+=5;
        if(comments>=20)
            percentage+=15;
        else if(comments>=10)
            percentage+=10;
        else
            percentage+=5;
        if(followers>=50)
            percentage+=15;
        else if(followers>=25)
            percentage+=10;
        else
            percentage+=5;
        cout << "Profile Completion Percentage: " << percentage << "%" << endl;
    }
    
    void getUserActivity() const {
        cout<<"Number of Posts: " << number_of_posts << endl;
        cout<<"Number of Likes: " << likes << endl;
        cout<<"Number of Comments: " << comments << endl;
        cout<<"Number of Followers: " << followers << endl;
    }
    
    int getLikes() const {
        return likes;
    }
    
    int getNumOfPosts() const {
        return number_of_posts;
    }
    
    int getTotalLikes() {

        return likes;
    }
    
    int getTotalPosts() {

        return number_of_posts;
    }
    
    void updateProfileInfo(string infoToUpdate) {
        if (infoToUpdate == "username") {
            // logic to update username
            cout << "Username updated successfully!" << endl;
        } else if (infoToUpdate == "email") {
            // logic to update email
            cout << "Email updated successfully!" << endl;
        } else if (infoToUpdate == "password") {
            // logic to update password
            cout << "Password updated successfully!" << endl;
        } else if (infoToUpdate == "profile picture") {
            // logic to update profile picture
            cout << "Profile picture updated successfully!" << endl;
        } else {
            cout << "Invalid information provided. Please try again." << endl;
        }
    }
};
int main ()
{
    // create a Profile object
    Profile user1(1, "Omer", "Omer2810", "OmerHafeez2810@gmail.com", "default");

    // set user activity data
    user1.setter_numposts(10);
    user1.setter_followers(50);
    user1.setter_like(100);
    user1.setter_comments(20);

    // validate email and get password strength
    user1.validateEmail();
    cout << "Password strength: " << user1.getPasswordStrength() << endl;

    // get profile completion percentage and user activity
    string strength = user1.getPasswordStrength();
    user1.getProfileCompletionPercentage(strength);
    user1.getUserActivity();

    // get and update profile data
    int likes = user1.getLikes();
    int posts = user1.getNumOfPosts();
    cout << "Total likes: " << user1.getLikes() << endl;
    cout << "Total posts: " << user1.getNumOfPosts() << endl;
    user1.setter_numposts(posts + 1);
    user1.setter_like(likes + 1);

    return 0;
}