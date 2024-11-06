

#include <iostream>

using namespace std;

int main() {
    int result = 0;
    int score = 0;

   

    cout << "10 > 0?: (0) -> True, (1) -> false" << endl;

    cin >> result;

    if (result == 0) {

        cout << "Good, next one!" << endl;
        score = ++score;
        cout << "Your Score=   " << score << endl;

        cout << "10^2 > 1000?: (0) -> True, (1) -> false" << endl;
        cin >> result;

        if (result == 1) {
            cout << "Good work, next one!" << endl;
            score = ++score;
            cout << "Your Score=   " << score << endl;

            cout << "10^3 >= 1000?: (0) -> True, (1) -> false" << endl;
            cin >> result;

            if (result == 0) {
                cout << "Ok, next one will be much harder!" << endl;
                score = ++score;
                cout << "Your Score=   " << score << endl;
                
                cout << "10+14*3 < 65?: (0) -> True, (1) -> false" << endl;
                cin >> result;

                if (result == 0) {
                    cout << "Good work!" << endl;
                    score = ++score;
                    cout << "Your Score=   " << score << endl;

                    cout << "You are Human ?: (0) -> True, (1) -> false" << endl;
                    cin >> result;

                    if (result == 0) {
                        cout << "Next is!" << endl;
                        score = ++score;
                        cout << "Your Score=   " << score << endl;

                        cout << "10*(8*2) > 158?: (0) -> True, (1) -> false" << endl;
                        cin >> result;

                        if (result == 0) {
                            cout << "Okie Dookie" << endl;
                            score = ++score;
                            cout << "Your Score=   " << score << endl;

                            cout << "10+2*(-1) < 10?: (0) -> True, (1) -> false" << endl;
                            cin >> result;

                            if (result == 0) {
                                cout << "Good work, next one!" << endl;
                                score = ++score;
                                cout << "Your Score=   " << score << endl;

                                cout << "10^2 < -1000?: (0) -> True, (1) -> false" << endl;
                                cin >> result;

                                if (result == 1) {
                                    cout << "Gooooood!" << endl;
                                    score = ++score;
                                    cout << "Your Score=   " << score << endl;

                                    cout << "10^4 > 1000?: (0) -> True, (1) -> false" << endl;
                                    cin >> result;

                                    if (result == 0) {
                                        cout << "Good work, next one!" << endl;
                                        score = ++score;
                                        cout << "Your Score=   " << score << endl;

                                        cout << "1000 >= 1000?: (0) -> True, (1) -> false" << endl;
                                        cin >> result;

                                        if (result == 0) {
                                            cout << "Good work, next one!" << endl;
                                            score = ++score;
                                            cout << "Your Score=   " << score << endl;

                                            cout << "10+2 >= 1000?: (0) -> True, (1) -> false" << endl;
                                            cin >> result;

                                            if (result == 1) {
                                                cout << "Good work, next one!" << endl;
                                                score = ++score;
                                                cout << "Your Score=   " << score << endl;

                                                cout << "10+2/2+3 = 14?: (0) -> True, (1) -> false" << endl;
                                                cin >> result;

                                                if (result == 0) {
                                                    cout << "OMG you really did that!" << endl;
                                                    score = ++score;
                                                    cout << "Your Score=   " << score << endl;

                                                }
                                                else if (result == 1) {
                                                    cout << "You were so close!" << "Your score = \t " << score;
                                                    return 0;
                                                }
                                                else {
                                                    return 0;
                                                }
                                            }
                                            else if (result == 0) {
                                                cout << "You Lose" << "Your score = \t " << score;
                                                return 0;
                                            }
                                            else {
                                                return 0;
                                            }
                                        }
                                        else if (result == 1) {
                                            cout << "You Lose" << "Your score = \t " << score;
                                            return 0;
                                        }
                                        else {
                                            return 0;
                                        }

                                    }
                                    else if (result == 1) {
                                        cout << "You Lose" << "Your score = \t " << score;
                                        return 0;
                                    }
                                    else {
                                        return 0;
                                    }

                                }
                                else if (result == 0) {
                                    cout << "You Lose" << "Your score = \t " << score;
                                    return 0;
                                }
                                else {
                                    return 0;
                                }

                            }
                            else if (result == 0) {
                                cout << "You Lose" << "Your score = \t " << score;
                                return 0;
                            }
                            else {
                                return 0;
                            }

                        }
                        else if (result == 1) {
                            cout << "You Lose" << "Your score = \t " << score;
                            return 0;
                        }
                        else {
                            return 0;
                        }
                    }
                    else if (result == 1) {
                        cout << "You Lose" << "Your score = \t " << score;
                        return 0;
                    }
                    else {
                        return 0;
                    }
                }
                else if (result == 1) {
                    cout << "You Lose" << "Your score = \t " << score;
                    return 0;
                }
                else {
                    return 0;
                }
            }
            else if (result == 1) {
                cout << "You Lose" << "Your score = \t " << score;
                return 0;
            }
            else {
                return 0;
            }
        }
        else if (result == 0) {
            cout << "You Lose" << "Your score = \t " << score;
            return 0;
        }
        else {
            return 0;
        }
    }
    else if (result == 1) {
        cout << "You Lose\n" << "Your score = \t " << score;
        return 0;
    }
    else {
        return 0;
    }
}

