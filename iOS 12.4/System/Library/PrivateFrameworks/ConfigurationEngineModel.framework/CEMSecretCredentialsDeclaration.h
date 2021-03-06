/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSecretCredentialsDeclaration : CEMPayloadBase {

	NSString* _payloadSecret;

}

@property (nonatomic,copy) NSString * payloadSecret;              //@synthesize payloadSecret=_payloadSecret - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithSecret:(id)arg1 ;
+(id)buildRequiredOnlyWithSecret:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setPayloadSecret:(NSString *)arg1 ;
-(NSString *)payloadSecret;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

