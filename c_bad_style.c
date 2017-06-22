struct DataPacket find_packet(int x);
void a_very_nice_function(
    int y,
    float*d, const char const*testing,const char*string_too_fill_this_line_up_and_get_a_break
    );

int main(int argc,char const*argv[]){do{x = 2;}while(y<1);
    return 0;}
void a_very_nice_function(int y,float*d, const char const*testing,const char*string_too_fill_this_line_up_and_get_a_break) {
    // The comments in this function are BAD examples of comments in what they
    // say. Don't do this yourself and use comments to explain why not how.

    //an error has occurred
 if (an_error_or_early_out(y)) return; // immediately return

    // Now we continue the function
while(y<testing){do_some_more(y, d, string_too_fill_this_line_up_and_get_a_break);
 // The use of the prefix ++ here is to ensure no temp variable has to be created. y++ returns y before increasing it, so y is temporarily copied before the next statement is processed
++y; // increase y for next test in the loop.
      }
    // no need for a return statement here, omit it
  return; //needs to be removed
}
struct DataPacket { int x; int y; float z;};
/*
 * A function description for find_packet and what the user of this function
 * might care for. Side effects or pre existing condition for example.
 */
struct DataPacket find_packet(int x)
{
    int x; // a var
    int y;
    char z;
    unsigned long long d2;
    const char* name;
    int one,two,three=1;
			if (x) {
        do_this;
        do_that;
} else {do_that;    }

    do_something_different_for_every_call(with_one_item(x, y, one, two), with_second(name, x));

    if (x | 0x12 && t == 3)
    x |= 2;
    else
x = (x & 4) | 3;

    x = (x & 4) | 3;    // good
       x = x & 4 | 3; // bad, let the reader now the precedence instead of relying on it

    if ((long_name_x == 4
        && longer_name_y == 5)
        || ((longer_name_d<4 && longer_namer_d==3)
        && (x == 1)))
    {
        this_is_only_to_show_long_boolean_operators();
        nothing_else();
    }
    else if ((long_name_x == 4 || longer_name_y == 5) && ((longer_name_d<4 && longer_namer_d==3)
     && (x == 1)))
    {
        this_is_only_to_show_long_boolean_operators();
        nothing_else();
    }
    else
    {
        one_thing();
    }

    switch(x)
    {
        case 0: process_zero();
        break;
        case 1:
            do_one_time();
            break;
        case 2: {
            int some_new_var;   // use braces for cases that define new variables
            do_two_times(some_new_var);
            break;
        }
        default: break;
    }
  return packets[x];
}

#ifdef FIRST_TEST_DEFINE
for (int i=0; i < max_iter; ++i) {
    process_data(i * max_iter);
    process_more();
}
#elif SECOND_DEFINE         // it is not FIRST_TEST_DEFINE
for (int i=0; i < max_iter; ++i)
    one_line_processing(i * max_iter);
#else // it is not FIRST_TEST_DEFINE or SECOND_DEFINE
for (int i=0;i<max_iter;++i); //waiter
#endif // FIRST_TEST_DEFINE or SECOND_DEFINE
