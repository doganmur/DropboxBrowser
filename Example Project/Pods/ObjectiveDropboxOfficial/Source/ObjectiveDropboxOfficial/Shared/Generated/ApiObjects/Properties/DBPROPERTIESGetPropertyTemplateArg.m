///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBPROPERTIESGetPropertyTemplateArg.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBPROPERTIESGetPropertyTemplateArg

#pragma mark - Constructors

- (instancetype)initWithTemplateId:(NSString *)templateId {
  [DBStoneValidators stringValidator:@(1) maxLength:nil pattern:@"(/|ptid:).*"](templateId);

  self = [super init];
  if (self) {
    _templateId = templateId;
  }
  return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBPROPERTIESGetPropertyTemplateArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBPROPERTIESGetPropertyTemplateArgSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBPROPERTIESGetPropertyTemplateArgSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBPROPERTIESGetPropertyTemplateArgSerializer

+ (NSDictionary *)serialize:(DBPROPERTIESGetPropertyTemplateArg *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"template_id"] = valueObj.templateId;

  return jsonDict;
}

+ (DBPROPERTIESGetPropertyTemplateArg *)deserialize:(NSDictionary *)valueDict {
  NSString *templateId = valueDict[@"template_id"];

  return [[DBPROPERTIESGetPropertyTemplateArg alloc] initWithTemplateId:templateId];
}

@end