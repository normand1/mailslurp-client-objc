#import <Foundation/Foundation.h>
#import "OAIEmail.h"
#import "OAIEmailPreview.h"
#import "OAIInbox.h"
#import "OAIMatchOptions.h"
#import "OAISendEmailOptions.h"
#import "OAIApi.h"

/**
* MailSlurp API
* ## Introduction  [MailSlurp](https://www.mailslurp.com) is an Email API for developers and QA testers. It let's users: - create emails addresses on demand - receive emails and attachments in code - send templated HTML emails  ## About  This page contains the REST API documentation for MailSlurp. All requests require API Key authentication passed as an `x-api-key` header.  Create an account to [get your free API Key](https://app.mailslurp.com/sign-up/).  ## Resources - 🔑 [Get API Key](https://app.mailslurp.com/sign-up/)                    - 🎓 [Developer Portal](https://www.mailslurp.com/docs/)           - 📦 [Library SDKs](https://www.mailslurp.com/docs/) - ✍️ [Code Examples](https://www.mailslurp.com/examples) - ⚠️ [Report an issue](https://drift.me/mailslurp)  ## Explore  
*
* The version of the OpenAPI document: 6.5.2
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface OAICommonActionsControllerApi: NSObject <OAIApi>

extern NSString* kOAICommonActionsControllerApiErrorDomain;
extern NSInteger kOAICommonActionsControllerApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create new random inbox
/// Returns an Inbox with an `id` and an `emailAddress`
///
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIInbox*
-(NSURLSessionTask*) createNewEmailAddressWithCompletionHandler: 
    (void (^)(OAIInbox* output, NSError* error)) handler;


/// Delete all emails in an inbox
/// Deletes all emails
///
/// @param inboxId inboxId
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return void
-(NSURLSessionTask*) emptyInboxWithInboxId: (NSString*) inboxId
    completionHandler: (void (^)(NSError* error)) handler;


/// Send an email from a random email address
/// To specify an email address first create an inbox and use that with the other send email methods
///
/// @param sendEmailOptions sendEmailOptions
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendEmailSimpleWithSendEmailOptions: (OAISendEmailOptions*) sendEmailOptions
    completionHandler: (void (^)(NSError* error)) handler;


/// Wait for and return count number of emails 
/// Will only wait if count is greater that the found emails in given inbox.If you need to wait for an email for a non-empty inbox see the other receive methods.
///
/// @param count Number of emails to wait for. Must be greater that 1 (optional)
/// @param inboxId Id of the inbox we are fetching emails from (optional)
/// @param timeout Max milliseconds to wait (optional)
/// @param unreadOnly Optional filter for unread only (optional) (default to @(NO))
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<OAIEmailPreview>*
-(NSURLSessionTask*) waitForEmailCountWithCount: (NSNumber*) count
    inboxId: (NSString*) inboxId
    timeout: (NSNumber*) timeout
    unreadOnly: (NSNumber*) unreadOnly
    completionHandler: (void (^)(NSArray<OAIEmailPreview>* output, NSError* error)) handler;


/// Fetch inbox's latest email or if empty wait for email to arrive
/// Will return either the last received email or wait for an email to arrive and return that. If you need to wait for an email for a non-empty inbox see the other receive methods.
///
/// @param inboxId Id of the inbox we are fetching emails from (optional)
/// @param timeout Max milliseconds to wait (optional)
/// @param unreadOnly Optional filter for unread only (optional) (default to @(NO))
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIEmail*
-(NSURLSessionTask*) waitForLatestEmailWithInboxId: (NSString*) inboxId
    timeout: (NSNumber*) timeout
    unreadOnly: (NSNumber*) unreadOnly
    completionHandler: (void (^)(OAIEmail* output, NSError* error)) handler;


/// Wait or return list of emails that match simple matching patterns
/// Results must also meet provided count. Match options allow simple CONTAINS or EQUALS filtering on SUBJECT, TO, BCC, CC, and FROM.
///
/// @param matchOptions matchOptions
/// @param count Number of emails to wait for. Must be greater that 1 (optional)
/// @param inboxId Id of the inbox we are fetching emails from (optional)
/// @param timeout Max milliseconds to wait (optional)
/// @param unreadOnly Optional filter for unread only (optional) (default to @(NO))
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<OAIEmailPreview>*
-(NSURLSessionTask*) waitForMatchingEmailWithMatchOptions: (OAIMatchOptions*) matchOptions
    count: (NSNumber*) count
    inboxId: (NSString*) inboxId
    timeout: (NSNumber*) timeout
    unreadOnly: (NSNumber*) unreadOnly
    completionHandler: (void (^)(NSArray<OAIEmailPreview>* output, NSError* error)) handler;


/// Wait for or fetch the email with a given index in the inbox specified
/// 
///
/// @param inboxId Id of the inbox we are fetching emails from (optional)
/// @param index Zero based index of the email to wait for (optional)
/// @param timeout Max milliseconds to wait (optional)
/// @param unreadOnly Optional filter for unread only (optional) (default to @(NO))
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIEmail*
-(NSURLSessionTask*) waitForNthEmailWithInboxId: (NSString*) inboxId
    index: (NSNumber*) index
    timeout: (NSNumber*) timeout
    unreadOnly: (NSNumber*) unreadOnly
    completionHandler: (void (^)(OAIEmail* output, NSError* error)) handler;



@end
