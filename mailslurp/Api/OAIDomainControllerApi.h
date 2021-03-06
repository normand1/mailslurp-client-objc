#import <Foundation/Foundation.h>
#import "OAICreateDomainOptions.h"
#import "OAIDomainDto.h"
#import "OAIDomainPreview.h"
#import "OAIApi.h"

/**
* MailSlurp API
* MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.   ## Resources - [Homepage](https://www.mailslurp.com) - Get an [API KEY](https://app.mailslurp.com/sign-up/) - Generated [SDK Clients](https://www.mailslurp.com/docs/) - [Examples](https://github.com/mailslurp/examples) repository 
*
* The version of the OpenAPI document: 6.5.2
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface OAIDomainControllerApi: NSObject <OAIApi>

extern NSString* kOAIDomainControllerApiErrorDomain;
extern NSInteger kOAIDomainControllerApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create Domain
/// Link a domain that you own with MailSlurp so you can create email addresses using it. Endpoint returns DNS records used for validation. You must add these verification records to your host provider's DNS setup to verify the domain.
///
/// @param domainOptions domainOptions
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIDomainDto*
-(NSURLSessionTask*) createDomainWithDomainOptions: (OAICreateDomainOptions*) domainOptions
    completionHandler: (void (^)(OAIDomainDto* output, NSError* error)) handler;


/// Delete a domain
/// Delete a domain. This will disable any existing inboxes that use this domain.
///
/// @param _id id
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:410 message:"Gone"
///
/// @return void
-(NSURLSessionTask*) deleteDomainWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a domain
/// Returns domain verification status and tokens for a given domain
///
/// @param _id id
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIDomainDto*
-(NSURLSessionTask*) getDomainWithId: (NSString*) _id
    completionHandler: (void (^)(OAIDomainDto* output, NSError* error)) handler;


/// Get domains
/// List all custom domains you have created
///
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<OAIDomainPreview>*
-(NSURLSessionTask*) getDomainsWithCompletionHandler: 
    (void (^)(NSArray<OAIDomainPreview>* output, NSError* error)) handler;



@end
