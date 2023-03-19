// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Home_Assistant_XAML::implementation
{
    double firstNumberData, secondNumberData, outputData;
    short adecuate;

    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainWindow::readData() {
        firstNumberData = stod(to_string(firstNumberField().Text()));
        secondNumberData = stod(to_string(secondNumberField().Text()));
    }

    int MainWindow::adecuateCheck() {
        if (firstNumberData == NULL || secondNumberData == NULL) {
            return 0;
        }
        else {
            return 1;
        }
    }

    void MainWindow::add(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e) {
        readData();
        
        outputData = firstNumberData + secondNumberData;

        resultField().Text(to_hstring(firstNumberData) + L" + " + to_hstring(secondNumberData) + L" = " + to_hstring(outputData));

    }

    void MainWindow::subtract(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e) {
        readData();

        outputData = firstNumberData - secondNumberData;

        resultField().Text(to_hstring(firstNumberData) + L" - " + to_hstring(secondNumberData) + L" = " + to_hstring(outputData));

    }

    void MainWindow::multiply(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e) {
        readData();

        outputData = firstNumberData * secondNumberData;

        resultField().Text(to_hstring(firstNumberData) + L" · " + to_hstring(secondNumberData) + L" = " + to_hstring(outputData));

    }

    void MainWindow::divide(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e) {
        readData();
        
        outputData = firstNumberData / secondNumberData;

        resultField().Text(to_hstring(firstNumberData) + L" ÷ " + to_hstring(secondNumberData) + L" = " + to_hstring(outputData));

    }
}