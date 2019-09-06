#import <Foundation/Foundation.h>
#import "OAIBulkSendEmailOptions.h"
#import "OAICreateWebhookOptions.h"
#import "OAIEmail.h"
#import "OAIEmailPreview.h"
#import "OAIInbox.h"
#import "OAISendEmailOptions.h"
#import "OAIWebhook.h"
#import "OAIApi.h"

/**
* MailSlurp API
* For documentation see [developer guide](https://www.mailslurp.com/developers). [Create an account](https://app.mailslurp.com) in the MailSlurp Dashboard to [view your API Key](https://app). For all bugs, feature requests, or help please [see support](https://www.mailslurp.com/support/).
*
* OpenAPI spec version: 0.0.1-alpha
* Contact: contact@mailslurp.dev
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface OAIExtraOperationsApi: NSObject <OAIApi>

extern NSString* kOAIExtraOperationsApiErrorDomain;
extern NSInteger kOAIExtraOperationsApiMissingParamErrorCode;

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
/// @param requestBody ids
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return void
-(NSURLSessionTask*) bulkDeleteInboxesWithRequestBody: (NSArray<NSString*>*) requestBody
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


/// Create an Inbox (email address)
/// Create a new inbox and ephemeral email address to send and receive from. This is a necessary step before sending or receiving emails. The response contains the inbox's ID and its associated email address. It is recommended that you create a new inbox during each test method so that it is unique and empty
///
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIInbox*
-(NSURLSessionTask*) createInboxWithCompletionHandler: 
    (void (^)(OAIInbox* output, NSError* error)) handler;


/// Attach a WebHook URL to an inbox
/// Get notified whenever an inbox receives an email via a WebHook URL. An emailID will be posted to this URL every time an email is received for this inbox. The URL must be publicly reachable by the MailSlurp server. You can provide basicAuth values if you wish to secure this endpoint.
///
/// @param inboxId inboxId
/// @param createWebhookOptions options
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIWebhook*
-(NSURLSessionTask*) createWebhookWithInboxId: (NSString*) inboxId
    createWebhookOptions: (OAICreateWebhookOptions*) createWebhookOptions
    completionHandler: (void (^)(OAIWebhook* output, NSError* error)) handler;


/// Delete Email
/// Deletes an email and removes it from the inbox
///
/// @param emailId emailId
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return void
-(NSURLSessionTask*) deleteEmail1WithEmailId: (NSString*) emailId
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete Inbox / Email Address
/// Permanently delete an inbox and associated email address
///
/// @param inboxId inboxId
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return void
-(NSURLSessionTask*) deleteInboxWithInboxId: (NSString*) inboxId
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete and disable a WebHook for an Inbox
/// 
///
/// @param inboxId inboxId
/// @param webhookId webhookId
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return void
-(NSURLSessionTask*) deleteWebhookWithInboxId: (NSString*) inboxId
    webhookId: (NSString*) webhookId
    completionHandler: (void (^)(NSError* error)) handler;


/// Get email attachment
/// Returns the specified attachment for a given email as a byte stream (file download). Get the attachmentId from the email response. Requires enterprise account.
///
/// @param attachmentId attachmentId
/// @param emailId emailId
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) downloadAttachmentWithAttachmentId: (NSString*) attachmentId
    emailId: (NSString*) emailId
    completionHandler: (void (^)(NSError* error)) handler;


/// Get Email Content
/// Returns a email summary object with headers and content. To retrieve the raw unparsed email use the getRawMessage endpoint
///
/// @param emailId emailId
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIEmail*
-(NSURLSessionTask*) getEmailWithEmailId: (NSString*) emailId
    completionHandler: (void (^)(OAIEmail* output, NSError* error)) handler;


/// List Emails in an Inbox / EmailAddress
/// List emails that an inbox has received. Only emails that are sent to the inbox's email address will appear in the inbox. It may take several seconds for any email you send to an inbox's email address to appear in the inbox. To make this endpoint wait for a minimum number of emails use the `minCount` parameter. The server will retry the inbox database until the `minCount` is satisfied or the `retryTimeout` is reached
///
/// @param inboxId Id of inbox that emails belongs to
/// @param limit Limit the result set, ordered by descending received date time (optional)
/// @param minCount Minimum acceptable email count. Will cause request to hang (and retry) until minCount is satisfied or retryTimeout is reached. (optional)
/// @param retryTimeout Maximum milliseconds to spend retrying inbox database until minCount emails are returned (optional)
/// @param since Exclude emails received before this ISO 8601 date time (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<OAIEmailPreview>*
-(NSURLSessionTask*) getEmailsWithInboxId: (NSString*) inboxId
    limit: (NSNumber*) limit
    minCount: (NSNumber*) minCount
    retryTimeout: (NSNumber*) retryTimeout
    since: (NSDate*) since
    completionHandler: (void (^)(NSArray<OAIEmailPreview>* output, NSError* error)) handler;


/// Get Inbox / EmailAddress
/// Returns an inbox's properties, including its email address and ID.
///
/// @param inboxId inboxId
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIInbox*
-(NSURLSessionTask*) getInboxWithInboxId: (NSString*) inboxId
    completionHandler: (void (^)(OAIInbox* output, NSError* error)) handler;


/// List Inboxes / Email Addresses
/// List the inboxes you have created
///
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<OAIInbox>*
-(NSURLSessionTask*) getInboxesWithCompletionHandler: 
    (void (^)(NSArray<OAIInbox>* output, NSError* error)) handler;


/// Get Raw Email Content
/// Returns a raw, unparsed and unprocessed email
///
/// @param emailId emailId
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSString*
-(NSURLSessionTask*) getRawEmailContentsWithEmailId: (NSString*) emailId
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


/// Get all WebHooks for an Inbox
/// 
///
/// @param inboxId inboxId
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<OAIWebhook>*
-(NSURLSessionTask*) getWebhooksWithInboxId: (NSString*) inboxId
    completionHandler: (void (^)(NSArray<OAIWebhook>* output, NSError* error)) handler;


/// Send Email
/// Send an email from the inbox's email address. Specify the email recipients and contents in the request body. See the `SendEmailOptions` for more information. Note the `inboxId` refers to the inbox's id NOT its email address
///
/// @param inboxId inboxId
/// @param sendEmailOptions sendEmailOptions
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) sendEmailWithInboxId: (NSString*) inboxId
    sendEmailOptions: (OAISendEmailOptions*) sendEmailOptions
    completionHandler: (void (^)(NSError* error)) handler;



@end
