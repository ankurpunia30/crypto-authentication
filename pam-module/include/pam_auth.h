#ifndef PAM_AUTH_H
#define PAM_AUTH_H

// Function declarations for the PAM module
extern "C" {
    int pam_sm_authenticate(/*...*/);
    int pam_sm_setcred(/*...*/);
}

#endif // PAM_AUTH_H
