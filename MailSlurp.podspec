#
# Be sure to run `pod lib lint MailSlurp.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = "MailSlurp"
    s.version          = "7.0.7"

    s.summary          = "MailSlurp API"
    s.description      = <<-DESC
                         MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
                         DESC

    s.platform     = :ios, '7.0'
    s.requires_arc = true

    s.framework    = 'SystemConfiguration'

    s.homepage     = "https://github.com/mailslurp/mailslurp-objc"
    s.license      = "Proprietary"
    s.source       = { :git => "https://github.com/mailslurp/mailslurp-objc.git", :tag => "#{s.version}" }
    s.author       = { "MailSlurp" => "contact@mailslurp.dev" }

    s.source_files = 'MailSlurp/**/*.{m,h}'
    s.public_header_files = 'MailSlurp/**/*.h'


    s.dependency 'AFNetworking', '~> 3'
    s.dependency 'JSONModel', '~> 1.2'
    s.dependency 'ISO8601', '~> 0.6'
end

