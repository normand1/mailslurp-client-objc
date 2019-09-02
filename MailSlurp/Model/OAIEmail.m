#import "OAIEmail.h"

@implementation OAIEmail

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"analysis": @"analysis", @"attachments": @"attachments", @"bcc": @"bcc", @"body": @"body", @"cc": @"cc", @"createdAt": @"createdAt", @"from": @"from", @"headers": @"headers", @"_id": @"id", @"inboxId": @"inboxId", @"rawUrl": @"rawUrl", @"subject": @"subject", @"to": @"to", @"updatedAt": @"updatedAt", @"userId": @"userId" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"analysis", @"attachments", @"bcc", @"body", @"cc", @"from", @"headers", @"rawUrl", @"subject", ];
  return [optionalProperties containsObject:propertyName];
}

@end
