/* Enter your code here. */
        Server s;
        try {
            int result = s.compute(A, B);
            cout << result << endl;
        } catch (std::bad_alloc& e) {
            cout << "Not enough memory\n";
        } catch (std::exception& e) {
            cout << "Exception: " << e.what() << endl;
        } catch (exception &e){
            cout << "Other Exception\n";
        } catch (int i) {
            cout << "Other Exception\n";  
        } 
