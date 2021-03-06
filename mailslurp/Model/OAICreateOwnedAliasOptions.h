#import <Foundation/Foundation.h>
#import "OAIObject.h"

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





@protocol OAICreateOwnedAliasOptions
@end

@interface OAICreateOwnedAliasOptions : OAIObject

/* Email address to be hidden behind alias [optional]
 */
@property(nonatomic) NSString* emailAddress;
/* Optional inbox ID to attach to alias. Emails received by this inbox will be forwarded to the alias email address [optional]
 */
@property(nonatomic) NSString* inboxId;
/* Optional name for alias [optional]
 */
@property(nonatomic) NSString* name;
/* Optional proxied flag. When proxied is true alias will forward the incoming emails to the aliased email address via a proxy inbox. A new proxy is created for every new email thread. By replying to the proxy you can correspond with using your email alias without revealing your real email address. [optional]
 */
@property(nonatomic) NSNumber* proxied;

@end
