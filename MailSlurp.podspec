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
    s.version          = "4.8.1"

    s.summary          = "MailSlurp API"
    s.description      = <<-DESC
                         For documentation see [developer guide](https://www.mailslurp.com/developers). [Create an account](https://app.mailslurp.com) in the MailSlurp Dashboard to [view your API Key](https://app). For all bugs, feature requests, or help please [see support](https://www.mailslurp.com/support/).
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

