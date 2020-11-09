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





@protocol OAISendEmailOptions
@end

@interface OAISendEmailOptions : OAIObject

/* Optional list of attachment IDs to send with this email. You must first upload each attachment separately in order to obtain attachment IDs. This way you can reuse attachments with different emails once uploaded. [optional]
 */
@property(nonatomic) NSArray<NSString*>* attachments;
/* Optional list of bcc destination email addresses [optional]
 */
@property(nonatomic) NSArray<NSString*>* bcc;
/* Optional contents of email. If body contains HTML then set `isHTML` to true to ensure that email clients render it correctly. You can use moustache template syntax in the email body in conjunction with `toGroup` contact variables or `templateVariables` data. If you need more templating control consider creating a template and using the `template` property instead of the body. [optional]
 */
@property(nonatomic) NSString* body;
/* Optional list of cc destination email addresses [optional]
 */
@property(nonatomic) NSArray<NSString*>* cc;
/* Optional charset [optional]
 */
@property(nonatomic) NSString* charset;
/* Optional from address. If not set the source inbox address will be used for this field. Beware of potential spam penalties when setting this field to an address not used by the inbox. For custom email addresses use a custom domain. [optional]
 */
@property(nonatomic) NSString* from;
/* Optional HTML flag. If true the `content-type` of the email will be `text/html`. Set to true when sending HTML to ensure proper rending on email clients [optional]
 */
@property(nonatomic) NSNumber* isHTML;
/* Optional replyTo header [optional]
 */
@property(nonatomic) NSString* replyTo;
/* Optional strategy to use when sending the email [optional]
 */
@property(nonatomic) NSString* sendStrategy;
/* Optional email subject line [optional]
 */
@property(nonatomic) NSString* subject;
/* Optional template ID to use for body. Will override body if provided. When using a template make sure you pass the corresponding map of `templateVariables`. You can find which variables are needed by fetching the template itself or viewing it in the dashboard. [optional]
 */
@property(nonatomic) NSString* template;
/* Optional map of template variables. Will replace moustache syntax variables in subject and body or template with the associated values if found. [optional]
 */
@property(nonatomic) NSObject* templateVariables;
/* List of destination email addresses. Even single recipients must be in array form. Maximum recipients per email depends on your plan. If you need to send many emails try using contacts or contact groups or use a non standard sendStrategy to ensure that spam filters are not triggered (many recipients in one email can affect your spam rating). [optional]
 */
@property(nonatomic) NSArray<NSString*>* to;
/* Optional list of contact IDs to send email to. Manage your contacts via the API or dashboard. When contacts are used the email is sent to each contact separately so they will not see other recipients. [optional]
 */
@property(nonatomic) NSArray<NSString*>* toContacts;
/* Optional contact group ID to send email to. You can create contacts and contact groups in the API or dashboard and use them for email campaigns. When contact groups are used the email is sent to each contact separately so they will not see other recipients [optional]
 */
@property(nonatomic) NSString* toGroup;

@end