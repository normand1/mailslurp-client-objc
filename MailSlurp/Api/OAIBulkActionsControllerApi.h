#import <Foundation/Foundation.h>
#import "OAIBulkSendEmailOptions.h"
#import "OAIInbox.h"
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



@interface OAIBulkActionsControllerApi: NSObject <OAIApi>

extern NSString* kOAIBulkActionsControllerApiErrorDomain;
extern NSInteger kOAIBulkActionsControllerApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Bulk create Inboxes (email addresses)
/// Enterprise Plan Required
///
/// @param count Number of inboxes to be created in bulk
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<OAIInbox>*
-(NSURLSessionTask*) bulkCreateInboxesWithCount: (NSNumber*) count
    completionHandler: (void (^)(NSArray<OAIInbox>* output, NSError* error)) handler;


/// Bulk Delete Inboxes
/// Enterprise Plan Required
///
/// @param ids ids
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return void
-(NSURLSessionTask*) bulkDeleteInboxesWithIds: (NSArray<NSString*>*) ids
    completionHandler: (void (^)(NSError* error)) handler;


/// Bulk Send Emails
/// Enterprise Plan Required
///
/// @param bulkSendEmailOptions bulkSendEmailOptions
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) bulkSendEmailsWithBulkSendEmailOptions: (OAIBulkSendEmailOptions*) bulkSendEmailOptions
    completionHandler: (void (^)(NSError* error)) handler;



@end
