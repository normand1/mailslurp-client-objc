# OAISendEmailOptions

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**attachments** | **NSArray&lt;NSString*&gt;*** | Optional list of attachment IDs to send with this email. You must first upload each attachment separately in order to obtain attachment IDs | [optional] 
**bcc** | **NSArray&lt;NSString*&gt;*** | Optional list of bcc destination email addresses | [optional] 
**body** | **NSString*** | Contents of email. If HTML set isHTML to true. You can use moustache templates here if you provide a templateVariables option | [optional] 
**cc** | **NSArray&lt;NSString*&gt;*** | Optional list of cc destination email addresses | [optional] 
**charset** | **NSString*** | Optional charset | [optional] 
**from** | **NSString*** | Optional from address. If not set source inbox address will be used | [optional] 
**html** | **NSNumber*** |  | [optional] 
**replyTo** | **NSString*** | Optional replyTo header | [optional] 
**subject** | **NSString*** | Optional email subject line | [optional] 
**templateVariables** | [**NSObject***](.md) | Optional map of template variables. Will replace moustache syntax variables in subject or body with the associated values | [optional] 
**to** | **NSArray&lt;NSString*&gt;*** | List of destination email addresses. Even single recipients must be in array form. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


