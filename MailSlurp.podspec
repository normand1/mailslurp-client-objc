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
    s.version          = "7.0.2"

    s.summary          = "MailSlurp API"
    s.description      = <<-DESC
                         ## Introduction  [MailSlurp](https://www.mailslurp.com) is an Email API for developers and QA testers. It let's users: - create emails addresses on demand - receive emails and attachments in code - send templated HTML emails  ## About  This page contains the REST API documentation for MailSlurp. All requests require API Key authentication passed as an `x-api-key` header.  Create an account to [get your free API Key](https://app.mailslurp.com/sign-up/).  ## Resources - 🔑 [Get API Key](https://app.mailslurp.com/sign-up/)                    - 🎓 [Developer Portal](https://www.mailslurp.com/docs/)           - 📦 [Library SDKs](https://www.mailslurp.com/docs/) - ✍️ [Code Examples](https://www.mailslurp.com/examples) - ⚠️ [Report an issue](https://drift.me/mailslurp)  ## Explore  
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

